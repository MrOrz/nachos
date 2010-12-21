#ifndef BEDROOM_H
#define BEDROOM_H

#include "callback.h"
#include "thread.h"  // SleepingEntry Thread* DONE
#include <list>      // _sleeping_list        DONE

class Bedroom : public CallBackObj {
  public:
    Bedroom():_current_tick(0){};
    void PutToBed(Thread* t, int x);
      // put a thread to sleep and sets when to wake it up.

    void Tick(){ ++_current_tick; }

    inline bool IsEmpty(){return _beds.size() == 0; }

  private:
    class Bed{ // entry for every sleeping thread
    public:
      Bed(Thread* t, int x):sleeper(t), when(x){};
      Thread* sleeper; // the thread that lies on bed.
      int when; // when to wake up
    };
    void CallBack();
      // wake up the threads that should get up.
      // the handler for "waking thread" interrupts

    int _current_tick;    // the "clock" hanging on the wall of this bedroom
    std::list<Bed> _beds; // managing slept threads
};

#endif

