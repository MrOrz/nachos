#include "bedroom.h"
#include "utility.h"
#include "main.h"

void Bed::CallBack(){
  DEBUG(dbgSleep, "** " << _sleeper << " is waking up...");
  kernel->scheduler->ReadyToRun(_sleeper); // set thread status
  delete this;
}

