#include "bedroom.h"
#include "utility.h"
#include "main.h"

// put a thread to sleep and sets when to wake it up.
//
void Bedroom::PutToBed(Thread* t, int x){

  ASSERT(kernel->interrupt->getLevel() == IntOff); // should be atomic


//  if( IsEmpty() ) _current_timer_interrupt = 0;
    // zeros _current_tick when possible,  to prevent overflow.

  DEBUG(dbgSleep, "** Thread " << t << " will wake up at interrupt " << _current_interrupt +  x << ".");
  _beds.push_back( Bed(t, _current_interrupt +  x) );

  t->Sleep(false); // not finishing, thus pass in "false"
}
// advances the time inside the bedroom, and
// wake up the threads that should get up.
//
bool Bedroom::MorningCall(){
  bool woken = false;

  ++_current_interrupt;

  if(_current_interrupt%10 == 0)
    DEBUG(dbgSleep, "-- current interrupt is " << _current_interrupt);

  // check who should wake up
  for(std::list<Bed>::iterator it = _beds.begin(); it != _beds.end(); ){

    if(_current_interrupt >= it->when){    // should wake up this thread
      DEBUG(dbgSleep, "** " << it->sleeper << " is waking up...");
      woken = true;   // one thread is wakening, don't shut down the clock
      kernel->scheduler->ReadyToRun(it->sleeper); // set thread status
      it = _beds.erase(it);           // cleanup the bed
                                      // next 'it' is returned.
    }
    else
      ++it;
  }

  return woken;
}

