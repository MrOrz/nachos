// alarm.cc
//	Routines to use a hardware timer device to provide a
//	software alarm clock.  For now, we just provide time-slicing.
//
//	Not completely implemented.
//
// Copyright (c) 1992-1996 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "alarm.h"
#include "main.h"
//#include "interrupt.h" // setLevel() DONE

//----------------------------------------------------------------------
// Alarm::Alarm
//      Initialize a software alarm clock.  Start up a timer device
//
//      "doRandom" -- if true, arrange for the hardware interrupts to
//		occur at random, instead of fixed, intervals.
//----------------------------------------------------------------------

Alarm::Alarm(bool doRandom)
{
    timer = new Timer(doRandom, this);
}

//----------------------------------------------------------------------
// Alarm::CallBack
//	Software interrupt handler for the timer device. The timer device is
//	set up to interrupt the CPU periodically (once every TimerTicks).
//	This routine is called each time there is a timer interrupt,
//	with interrupts disabled.
//
//	Note that instead of calling Yield() directly (which would
//	suspend the interrupt handler, not the interrupted thread
//	which is what we wanted to context switch), we set a flag
//	so that once the interrupt handler is done, it will appear as
//	if the interrupted thread called Yield at the point it is
//	was interrupted.
//
//	For now, just provide time-slicing.  Only need to time slice
//      if we're currently running something (in other words, not idle).
//	Also, to keep from looping forever, we check if there's
//	nothing on the ready list, and there are no other pending
//	interrupts.  In this case, we can safely halt.
//----------------------------------------------------------------------

void
Alarm::CallBack()
{
    Interrupt *interrupt = kernel->interrupt;
    MachineStatus status = interrupt->getStatus();

    /* DONE: checking _sleeping_list for threads to wake */

    /* within the interrupt handler, interrupt won't happen
     (guarded by 'inHandler' within interrupt.h .) Don't need to
     turn off interrupt here.*/

    // TODO: make use of interrupts instead.
    // checking & removing _tick_left everytime is silly :P
    
    for(std::list<SleepingEntry>::iterator it = _sleeping_list.begin();
        it != _sleeping_list.end();++it){

      --(it->_tick_left); // take one tick away

      if(it->_tick_left == -1){ // should wake up this thread
        DEBUG(dbgThread, "Thread " << (int)(it->_thread) << " is awakening.");        
        cout <<"Thread " << (int)(it->_thread) << " is awakening." <<endl;;
        kernel->scheduler->ReadyToRun(it->_thread);

        it = _sleeping_list.erase(it);       // remove from _sleeping_list
        status = SystemMode;
        if(it == _sleeping_list.end())break;
      }


    }	
    
    /* ---- */
    if (status == IdleMode && _sleeping_list.empty()) {	// is it time to quit?
        if (!interrupt->AnyFutureInterrupts()) {
	    timer->Disable();	// turn off the timer
	}
    } else {			// there's someone to preempt
        //DONE
        if(kernel->scheduler->getSchedulerType() == RR) interrupt->YieldOnReturn();
        else if(kernel->scheduler->getSchedulerType() == SJF){
            int worktime = kernel->stats->userTicks - kernel->currentThread->getStartTime();
            kernel->currentThread->setBurstTime(worktime);

        }

    }


}


void
Alarm::WaitUntil(int x){

  // manipulating interrupts, thus turn off interrupt.
  IntStatus oldLevel = kernel->interrupt->SetLevel(IntOff);

  Thread* t = kernel->currentThread;
  DEBUG(dbgThread, "Thread " << (int)t << " will sleep for " << x << " ticks...");

  _sleeping_list.push_back( SleepingEntry(t, x) );
  t->Sleep(false); // not finishing, thus pass in "false"

  (void) kernel->interrupt->SetLevel(oldLevel);
  // set the original interrupt level back.

}

