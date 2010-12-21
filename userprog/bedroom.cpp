#include "bedroom.h"


// put a thread to sleep and sets when to wake it up.
//
void Bedroom::PutToBed(Thread* t, int x){

  ASSERT(kernel->interrupt->getLevel() == IntOff); // should be atomic

  DEBUG(dbgThread, "Thread " << t << " will sleep for " << x << " ticks...");

  if( IsEmpty() ) _current_tick = 0;
    // zeros _current_tick when possible,  to prevent overflow.

  _bedroom.push_back( Bed(t, _current_tick +  x) );

  kernel->interrupt->Schedule(MorningCall, x, TimerInt);
    // perform a MorningCall on this bedroom x ticks later.

  t->Sleep(false); // not finishing, thus pass in "false"
}

// wake up the threads that should get up.
// this is the handler for "waking thread" interrupts
//
void Bedroom::MorningCall(){
  // check who should wake up
  for(std::list<Bed>::iterator it = _beds.begin(); it != _beds.end(); ){

    std::list<Bed>::iterator to_erase = _beds.end();

    if(it->when >= _current_tick){    // should wake up this thread
      it->sleeper->setStatus(READY);  // set thread status
      to_erase = it;                  // going to erase it
    }

    ++it;

    // erase the bed after it++.
    if(to_erase != _beds.end()) _beds.erase(to_erase);
  }

}

