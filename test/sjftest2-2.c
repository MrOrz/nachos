#include "syscall.h"

int
main()
{
    int i;
    for( i = 100; i < 105; ++i)
        PrintInt(i);
    Sleep(21);
    for( i = 105; i < 120; ++i)
        PrintInt(i);
}

