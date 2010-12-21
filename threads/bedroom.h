#ifndef BEDROOM_H
#define BEDROOM_H

#include "callback.h"
#include "thread.h"  // SleepingEntry Thread* DONE
#include <list>      // _sleeping_list        DONE

class Bed : public CallBackObj {
  public:
    Bed(Thread* t):_sleeper(t){};
  private:
    Thread* _sleeper;
    void CallBack();
};

#endif

