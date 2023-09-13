cmake_minimum_required(VERSION 3.25)
project(C_przyklad C)

set(CMAKE_C_STANDARD 11)

add_executable(C_przyklad main.c mymath.c mymath.h)
