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
    bool woken =  _bedroom.MorningCall(); // advance the time inside the bedroom
                                          // returns true when any thread woken

    if (status == IdleMode && _bedroom.IsEmpty() ) {// is it time to quit?
        if (!interrupt->AnyFutureInterrupts()  && !woken) {
	        timer->Disable();	// turn off the timer
	      }
    } else {			// there's someone to preempt
        //DONE
        if(kernel->scheduler->getSchedulerType() == RR) interrupt->YieldOnReturn();
    }
}

void
Alarm::WaitUntil(int x){

  // turn off interrupt temporarily.
  IntStatus oldLevel = kernel->interrupt->SetLevel(IntOff);
  Thread* t = kernel->currentThread;

  // SJF burst time evaluation
  if(kernel->scheduler->getSchedulerType() == SJF){
    int worktime = kernel->stats->userTicks - t->getStartTime();
    t->setBurstTime(0.5 * (t->getBurstTime() + worktime));
    t->setStartTime(kernel->stats->userTicks);

    DEBUG(dbgSleep, "Thread " << t << " go to sleep");
    DEBUG(dbgSleep, "Actual Work Time:" << worktime);
    DEBUG(dbgSleep, "Next Burst Time:" << t->getBurstTime());
//    cout << "Thread " << (int)t << "go to sleep" << endl;
//    cout << "Actual Work Time:" << worktime << endl;
//    cout << "Next Burst Time:" << t->getBurstTime() << endl;
  }

  _bedroom.PutToBed(t, x);  // put t to bed

  (void) kernel->interrupt->SetLevel(oldLevel);
  // set the original interrupt level back.

}

