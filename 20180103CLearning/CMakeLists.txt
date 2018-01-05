# cmake_minimum_required(VERSION <specify CMake version here>)
project(20180103CLearning)

#link_directories("../googletest/google-distribution/lib")
include_directories("D:/software/MinGW/lib/gcc/mingw32/6.3.0/include")

set(CMAKE_CXX_STANDARD 11)

add_executable(20180103CLearning
        main.c
        NameInfo.h)
