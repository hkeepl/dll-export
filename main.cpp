#include "mydll.h"

#include <iostream>
#include <Windows.h>

typedef int (*MathOperatorType)(int, int);
typedef int(__cdecl *MathOperatorCDeclType)(int, int);
typedef int(__stdcall *MathOperatorStdCallType)(int, int);
typedef int(__fastcall *MathOperatorFastCallType)(int, int);

int main()
{
    HMODULE library = ::LoadLibraryA("libmydll.dll");
    if (NULL == library)
    {
        exit(-1);
    }

    MathOperatorType add_operator = (MathOperatorType)::GetProcAddress(library, "add");
    if (NULL != add_operator)
    {
        std::cout << add_operator(1, 2) << "@" << __LINE__ << std::endl;
    }
    MathOperatorType add1_operator = (MathOperatorType)::GetProcAddress(library, "add1");
    if (NULL != add1_operator)
    {
        std::cout << add1_operator(1, 2) << "@" << __LINE__ << std::endl;
    }
#ifndef _WIN64
    MathOperatorStdCallType add2_operator = (MathOperatorStdCallType)::GetProcAddress(library, "_add2@8");
#else
    MathOperatorType add2_operator = (MathOperatorType)::GetProcAddress(library, "add2");
#endif
    if (NULL != add2_operator)
    {
        std::cout << add2_operator(1, 2) << "@" << __LINE__ << std::endl;
    }
#ifndef _WIN64
    MathOperatorFastCallType add3_operator = (MathOperatorFastCallType)::GetProcAddress(library, "@add3@8");
#else
    MathOperatorType add3_operator = (MathOperatorType)::GetProcAddress(library, "add3");
#endif
    if (NULL != add3_operator)
    {
        std::cout << add3_operator(1, 2) << "@" << __LINE__ << std::endl;
    }

    MathOperatorType sub_operator = (MathOperatorType)::GetProcAddress(library, "?sub@@YAHHH@Z");
    if (NULL != sub_operator)
    {
        std::cout << sub_operator(1, 2) << "@" << __LINE__ << std::endl;
    }
    MathOperatorType sub1_operator = (MathOperatorType)::GetProcAddress(library, "?sub1@@YAHHH@Z");
    if (NULL != sub1_operator)
    {
        std::cout << sub1_operator(1, 2) << "@" << __LINE__ << std::endl;
    }
#ifndef _WIN64
    MathOperatorStdCallType sub2_operator = (MathOperatorStdCallType)::GetProcAddress(library, "?sub2@@YGHHH@Z");
#else
    MathOperatorType sub2_operator = (MathOperatorType)::GetProcAddress(library, "?sub2@@YAHHH@Z");
#endif
    if (NULL != sub2_operator)
    {
        std::cout << sub2_operator(1, 2) << "@" << __LINE__ << std::endl;
    }

#ifndef _WIN64
    MathOperatorFastCallType sub3_operator = (MathOperatorFastCallType)::GetProcAddress(library, "?sub3@@YIHHH@Z");
#else
    MathOperatorType sub3_operator = (MathOperatorType)::GetProcAddress(library, "?sub3@@YAHHH@Z");
#endif
    if (NULL != sub3_operator)
    {
        std::cout << sub3_operator(1, 2) << "@" << __LINE__ << std::endl;
    }

    //////////////////////// 乘法 ///////////////////////////////////////////////////////////////////////
    MathOperatorType mul_operator = (MathOperatorType)::GetProcAddress(library, "?mul@@YAHHH@Z");
    if (NULL != mul_operator)
    {
        std::cout << mul_operator(1, 2) << "@" << __LINE__ << std::endl;
    }
    MathOperatorType mul1_operator = (MathOperatorType)::GetProcAddress(library, "?mul1@@YAHHH@Z");
    if (NULL != mul1_operator)
    {
        std::cout << mul1_operator(1, 2) << "@" << __LINE__ << std::endl;
    }
#ifndef _WIN64
    MathOperatorStdCallType mul2_operator = (MathOperatorStdCallType)::GetProcAddress(library, "?mul2@@YGHHH@Z");
#else
    MathOperatorType mul2_operator = (MathOperatorType)::GetProcAddress(library, "?mul2@@YAHHH@Z");
#endif
    if (NULL != mul2_operator)
    {
        std::cout << mul2_operator(1, 2) << "@" << __LINE__ << std::endl;
    }

#ifndef _WIN64
    MathOperatorFastCallType mul3_operator = (MathOperatorFastCallType)::GetProcAddress(library, "?mul3@@YIHHH@Z");
#else
    MathOperatorType mul3_operator = (MathOperatorType)::GetProcAddress(library, "?mul3@@YAHHH@Z");
#endif
    if (NULL != mul3_operator)
    {
        std::cout << mul3_operator(1, 2) << "@" << __LINE__ << std::endl;
    }

    return 0;
}