#include "mydll.h"

int add(int a, int b)
{
    return (a + b);
}
int add1(int a, int b)
{
    return (a + b);
}
int
#ifndef _WIN64
    __stdcall
#endif
    add2(int a, int b)
{
    return (a + b);
}
int
#ifndef _WIN64
    __fastcall
#endif
    add3(int a, int b)
{
    return (a + b);
}

int sub(int a, int b)
{
    return (a - b);
}
int sub1(int a, int b)
{
    return (a - b);
}
int
#ifndef _WIN64
    __stdcall
#endif
    sub2(int a, int b)
{
    return (a - b);
}
int
#ifndef _WIN64
    __fastcall
#endif
    sub3(int a, int b)
{
    return (a - b);
}

int mul(int a, int b)
{
    return (a / b);
}
int mul1(int a, int b)
{
    return (a / b);
}
int
#ifndef _WIN64
    __stdcall
#endif
    mul2(int a, int b)
{
    return (a / b);
}
int
#ifndef _WIN64
    __fastcall
#endif
    mul3(int a, int b)
{
    return (a / b);
}