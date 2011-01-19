// addrspace.cc 
//	Routines to manage address spaces (executing user programs).
//
//	In order to run a user program, you must:
//
//	1. link with the -n -T 0 option 
//	2. run coff2noff to convert the object file to Nachos format
//		(Nachos object code format is essentially just a simpler
//		version of the UNIX executable object code format)
//	3. load the NOFF file into the Nachos file system
//		(if you haven't implemented the file system yet, you
//		don't need to do this last step)
//
// Copyright (c) 1992-1996 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "main.h"
#include "addrspace.h"
#include "machine.h"
#include "noff.h"

bool AddrSpace::usedPhyPage[NumPhysPages]={0};
bool AddrSpace::usedVirPage[NumPhysPages]={0};
TranslationEntry * AddrSpace::ptrPageTable[NumPhysPages]={NULL};
//----------------------------------------------------------------------
// SwapHeader
// 	Do little endian to big endian conversion on the bytes in the 
//	object file header, in case the file was generated on a little
//	endian machine, and we're now running on a big endian machine.
//----------------------------------------------------------------------

static void 
SwapHeader (NoffHeader *noffH)
{
    noffH->noffMagic = WordToHost(noffH->noffMagic);
    noffH->code.size = WordToHost(noffH->code.size);
    noffH->code.virtualAddr = WordToHost(noffH->code.virtualAddr);
    noffH->code.inFileAddr = WordToHost(noffH->code.inFileAddr);
    noffH->initData.size = WordToHost(noffH->initData.size);
    noffH->initData.virtualAddr = WordToHost(noffH->initData.virtualAddr);
    noffH->initData.inFileAddr = WordToHost(noffH->initData.inFileAddr);
    noffH->uninitData.size = WordToHost(noffH->uninitData.size);
    noffH->uninitData.virtualAddr = WordToHost(noffH->uninitData.virtualAddr);
    noffH->uninitData.inFileAddr = WordToHost(noffH->uninitData.inFileAddr);
}

//----------------------------------------------------------------------
// AddrSpace::AddrSpace
// 	Create an address space to run a user program.
//	Set up the translation from program memory to physical 
//	memory.  For now, this is really simple (1:1), since we are
//	only uniprogramming, and we have a single unsegmented page table
//----------------------------------------------------------------------

AddrSpace::AddrSpace()
{
/*    pageTable = new TranslationEntry[NumPhysPages];
    for (unsigned int i = 0; i < NumPhysPages; i++) {
	pageTable[i].virtualPage = i;	// for now, virt page # = phys page #
	pageTable[i].physicalPage = i;
//	pageTable[i].physicalPage = 0;
	pageTable[i].valid = TRUE;
//	pageTable[i].valid = FALSE;
	pageTable[i].use = FALSE;
	pageTable[i].dirty = FALSE;
	pageTable[i].readOnly = FALSE;  
    }*/
    // zero out the entire address space
//    bzero(kernel->machine->mainMemory, MemorySize);
}

//----------------------------------------------------------------------
// AddrSpace::~AddrSpace
// 	Dealloate an address space.
//----------------------------------------------------------------------

AddrSpace::~AddrSpace()
{
    for(size_t i = 0; i < numPages; i++)
        usedPhyPage[pageTable[i].physicalPage]=FALSE;
    delete pageTable;
}


//----------------------------------------------------------------------
// AddrSpace::Load
// 	Load a user program into memory from a file.
//
//	Assumes that the page table has been initialized, and that
//	the object code file is in NOFF format.
//
//	"fileName" is the file containing the object code to load into memory
//----------------------------------------------------------------------

bool 
AddrSpace::Load(char *fileName) 
{
    OpenFile *executable = kernel->fileSystem->Open(fileName);
    NoffHeader noffH;
    unsigned int size;

    if (executable == NULL) {
	cerr << "Unable to open file " << fileName << "\n";
	return FALSE;
    }
    executable->ReadAt((char *)&noffH, sizeof(noffH), 0);
    if ((noffH.noffMagic != NOFFMAGIC) && 
		(WordToHost(noffH.noffMagic) == NOFFMAGIC))
    	SwapHeader(&noffH);
    ASSERT(noffH.noffMagic == NOFFMAGIC);

// how big is address space?
    size = noffH.code.size + noffH.initData.size + noffH.uninitData.size 
			+ UserStackSize;	// we need to increase the size
						// to leave room for the stack
    numPages = divRoundUp(size, PageSize);
//	cout << "number of pages of " << fileName<< " is "<<numPages<<endl;

    pageTable = new TranslationEntry[numPages];
    
    size = numPages * PageSize;

//    ASSERT(numPages <= NumPhysPages);		// check we're not trying
						// to run anything too big --
						// at least until we have
						// virtual memory
// DONE: Now we have virtual memory :P

    DEBUG(dbgAddr, "Initializing address space: " << numPages << ", " << size);

// then, copy in the code and data segments into memory
	if (noffH.code.size > 0) {
//        DEBUG(dbgAddr, "Initializing code segment.");
//	DEBUG(dbgAddr, noffH.code.virtualAddr << ", " << noffH.code.size);

        bool has_free_physical_page = true; // flag
        char *buf = new char[PageSize]; // a buffer to read code from disk
        for (unsigned int i=0,j=0,k=0; i < numPages; i++) { // find available virtual page
	        pageTable[i].virtualPage = i;	// for now, virt page # = phys page #
            
            // find available physical page
            if(has_free_physical_page){
                // usedPhyPage has only NumPhysPages entries.
                while(usedPhyPage[j]!=FALSE && j < NumPhysPages ) ++j; 
                if(j >= NumPhysPages){ // no free physical page.
                    has_free_physical_page = false;
                }
            }
            
            // if physical page j < NumPhysPages is found
            if(has_free_physical_page){
                ptrPageTable[j] = &pageTable[i];
                usedPhyPage[j]=TRUE;
                pageTable[i].physicalPage = j;
	            pageTable[i].valid = TRUE;
                pageTable[i].use = FALSE;
                pageTable[i].dirty = FALSE;
                pageTable[i].readOnly = FALSE;  
                
                // read this page of code into main memory
                executable->ReadAt( &(kernel->machine->mainMemory[PageSize*j] ), PageSize, noffH.code.inFileAddr + (PageSize*i) );
	        }	    
	        else    // already ran out of physical pages
	        {
	            // find available virtual page
	            while(usedVirPage[k]!=FALSE) ++k;
	            usedVirPage[k]=TRUE;
	            pageTable[i].virtualPage = k;   // virtual page id
	            pageTable[i].valid = FALSE;     // not in physical memory now!
	            pageTable[i].use = FALSE;
                pageTable[i].dirty = FALSE;
                pageTable[i].readOnly = FALSE;  
                
                // read this page of code into a buffer, then write to swap space
                executable->ReadAt(buf, PageSize, noffH.code.inFileAddr + (PageSize * i));
                kernel->swapDisk->WriteSector(k, buf);
	        }

	        
        }
        delete[] buf; // buf is useless now, delete it.
        
    // ------ following are codes in HW1.  (MrOrz)
    // since now we have to load code into memory page-by-page 
    // We commented these old code out.

/*        int virtualPageN = noffH.code.virtualAddr/PageSize;     
        int virtualPageLocation = noffH.code.virtualAddr% PageSize;
        int physicalPageN = pageTable[virtualPageN].physicalPage;
        int memoryLocation = physicalPageN * PageSize + virtualPageLocation;
                                            //virtualPageLocation=physicalPageLocation
        executable->ReadAt(&(kernel->machine->
        mainMemory[memoryLocation]),noffH.code.size,noffH.code.inFileAddr); 
*/
/*        	executable->ReadAt(
		&(kernel->machine->mainMemory[noffH.code.virtualAddr]), 
			noffH.code.size, noffH.code.inFileAddr);*/
    }
	if (noffH.initData.size > 0) {
//        DEBUG(dbgAddr, "Initializing data segment.");
//	DEBUG(dbgAddr, noffH.initData.virtualAddr << ", " << noffH.initData.size);
        int virtualPageN = noffH.initData.virtualAddr/PageSize;     
        int virtualPageLocation = noffH.initData.virtualAddr% PageSize;
        int physicalPageN = pageTable[virtualPageN].physicalPage;
        int memoryLocation = physicalPageN * PageSize + virtualPageLocation;
                                            //virtualPageLocation=physicalPageLocation
        executable->ReadAt(&(kernel->machine->
        mainMemory[memoryLocation]),noffH.initData.size,noffH.initData.inFileAddr);

/*        executable->ReadAt(
		&(kernel->machine->mainMemory[noffH.initData.virtualAddr]),
			noffH.initData.size, noffH.initData.inFileAddr);*/
    }

    delete executable;			// close file
    return TRUE;			// success
}

//----------------------------------------------------------------------
// AddrSpace::Execute
// 	Run a user program.  Load the executable into memory, then
//	(for now) use our own thread to run it.
//
//	"fileName" is the file containing the object code to load into memory
//----------------------------------------------------------------------

void 
AddrSpace::Execute(char *fileName) 
{
    pageTableLoaded = false;
    if (!Load(fileName)) {
	cout << "inside !Load(FileName)" << endl;
	return;				// executable not found
    }

    //kernel->currentThread->space = this;
    this->InitRegisters();		// set the initial register values
    this->RestoreState();		// load page table register

    pageTableLoaded = true;
    kernel->machine->Run();		// jump to the user progam

    ASSERTNOTREACHED();			// machine->Run never returns;
					// the address space exits
					// by doing the syscall "exit"
}


//----------------------------------------------------------------------
// AddrSpace::InitRegisters
// 	Set the initial values for the user-level register set.
//
// 	We write these directly into the "machine" registers, so
//	that we can immediately jump to user code.  Note that these
//	will be saved/restored into the currentThread->userRegisters
//	when this thread is context switched out.
//----------------------------------------------------------------------

void
AddrSpace::InitRegisters()
{
    Machine *machine = kernel->machine;
    int i;

    for (i = 0; i < NumTotalRegs; i++)
	machine->WriteRegister(i, 0);

    // Initial program counter -- must be location of "Start"
    machine->WriteRegister(PCReg, 0);	

    // Need to also tell MIPS where next instruction is, because
    // of branch delay possibility
    machine->WriteRegister(NextPCReg, 4);

   // Set the stack register to the end of the address space, where we
   // allocated the stack; but subtract off a bit, to make sure we don't
   // accidentally reference off the end!
    machine->WriteRegister(StackReg, numPages * PageSize - 16);
    DEBUG(dbgAddr, "Initializing stack pointer: " << numPages * PageSize - 16);
}

//----------------------------------------------------------------------
// AddrSpace::SaveState
// 	On a context switch, save any machine state, specific
//	to this address space, that needs saving.
//
//	For now, don't need to save anything!
//----------------------------------------------------------------------

void AddrSpace::SaveState() 
{
    if(pageTableLoaded){
        pageTable=kernel->machine->pageTable;
        numPages=kernel->machine->pageTableSize;            
    }
}

//----------------------------------------------------------------------
// AddrSpace::RestoreState
// 	On a context switch, restore the machine state so that
//	this address space can run.
//
//      For now, tell the machine where to find the page table.
//----------------------------------------------------------------------

void AddrSpace::RestoreState() 
{
    kernel->machine->pageTable = pageTable;
    kernel->machine->pageTableSize = numPages;
}

void AddrSpace::pageFaultHandle(int badVAddrReg){
        // TODO: handle pagefault exception here!    
    srand ( time(NULL) );
    printf("Page falut ocurred.\n");
    kernel->stats->numPageFaults++;
    unsigned int i = 0;
    int vpn = (unsigned) badVAddrReg / PageSize;
    while(usedPhyPage[i] !=FALSE && i < NumPhysPages)
        ++i;
    if(i < NumPhysPages){
        char *buffer = new char[PageSize];
        usedPhyPage[i] = TRUE;
        pageTable[vpn].valid = TRUE;
        pageTable[vpn].physicalPage = i;
        ptrPageTable[i] = &pageTable[vpn];
        kernel->swapDisk->ReadSector(pageTable[vpn].virtualPage, buffer);
        bcopy(buffer,&kernel->machine->mainMemory[i * PageSize],PageSize);
    }
    else{
        char *buffer1 = new char[PageSize];
        char *buffer2 = new char[PageSize];
        int victim = rand() % NumPhysPages;

        printf("Page %d swapping out\n",victim);

        bcopy(&kernel->machine->mainMemory[victim * PageSize], buffer1, PageSize);
        kernel->swapDisk->ReadSector(pageTable[vpn].virtualPage, buffer2);

        bcopy(buffer2, &kernel->machine->mainMemory[victim * PageSize], PageSize);
        kernel->swapDisk->WriteSector(pageTable[vpn].virtualPage, buffer1);

        ptrPageTable[victim]->virtualPage = pageTable[vpn].virtualPage;
        ptrPageTable[victim]->valid = FALSE;
        ptrPageTable[victim] = &pageTable[vpn];

        pageTable[vpn].valid = TRUE;
        pageTable[vpn].physicalPage = victim;
        printf("Page swap done\n");
    }
}
