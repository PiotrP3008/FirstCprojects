cmake_minimum_required(VERSION 3.25)
project(snake C)

set(CMAKE_C_STANDARD 11)

add_executable(snake main.c snake.c snake.h points.c points.h map.h)
