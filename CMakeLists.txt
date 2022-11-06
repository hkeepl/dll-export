cmake_minimum_required(VERSION 3.20)

project(DllExport C CXX)
set(CMAKE_CXX_STANDARD 11)

add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")

add_library(mydll SHARED mydll.h mydll.cpp mydll.def)
add_executable(mytest main.cpp)
target_link_libraries( mytest PRIVATE mydll)