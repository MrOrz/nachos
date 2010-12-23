#include "syscall.h"

int
main()
{
    int i;
    for(i = 0; i < 10; ++i)
        PrintInt(i);
    Sleep(100);
    for(i = 10; i < 20; ++i)
        PrintInt(i);
}

