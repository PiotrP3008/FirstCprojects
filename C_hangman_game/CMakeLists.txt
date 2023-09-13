cmake_minimum_required(VERSION 3.25)
project(C_hangman_game C)

set(CMAKE_C_STANDARD 11)

add_executable(C_hangman_game main.c hangman.c hangman.h)
