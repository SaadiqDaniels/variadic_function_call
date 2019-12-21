cmake_minimum_required(VERSION 3.15)
project(variadic_function_call)

set(CMAKE_CXX_STANDARD 17)

add_executable(vf_call driver.cpp vfcall.h)