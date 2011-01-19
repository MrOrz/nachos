#ifndef FRAME_INFO_ENTRY_H
#define FRAME_INFO_ENTRY_H

#include "copyright.h"
#include "utility.h"

class FrameInfoEntry
{
  public:
	bool valid;
	bool lock;
	unsigned int vpn;	//which virtual page is in 				   this frame
	AddrSpace *addrSpace; //which process	is 					using this frame
};



#endif
