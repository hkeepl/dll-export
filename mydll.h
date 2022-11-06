#ifndef MY_DLL_INCLUDED
#define MY_DLL_INCLUDED

/**
 * 函数声明和定义时，都要设置调用约定(Calling Convention)，平时没有见到这个东西是因为编译器默认有一个调用约定的设置
 * 即：
 *  C编译器是__cdecl
 *  C++编译器x86下是__cdecl，x64下是__fastcall增强版
 * 
 * MSVC 中
 *  x64 C编译都是__cdecl
 *  x86 C++编译都是__fastcall
 */
#ifdef __cplusplus
extern "C"
{
#endif

__declspec(dllexport) int add(int a, int b);
__declspec(dllexport) int __cdecl add1(int a, int b);
__declspec(dllexport) int __stdcall add2(int a, int b);
__declspec(dllexport) int __fastcall add3(int a, int b);

#ifdef __cplusplus
}
#endif

__declspec(dllexport) int sub(int a, int b);
__declspec(dllexport) int __cdecl sub1(int a, int b);
__declspec(dllexport) int __stdcall sub2(int a, int b);
__declspec(dllexport) int __fastcall sub3(int a, int b);

int mul(int a, int b);
int __cdecl mul1(int a, int b);
int __stdcall mul2(int a, int b);
int __fastcall mul3(int a, int b);

#endif