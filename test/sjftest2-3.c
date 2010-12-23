#include "syscall.h"

int
main()
{
    int i;
    for(i = 200; i < 202; ++i)
        PrintInt(i);
    Sleep(20);
    for(i = 202; i < 205; ++i)
        PrintInt(i);
    Sleep(20);
    for(i = 205; i < 220; ++i)
        PrintInt(i);
    
}

