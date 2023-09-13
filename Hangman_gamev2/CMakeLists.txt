cmake_minimum_required(VERSION 3.25)
project(Hangman_gamev2 C)

set(CMAKE_C_STANDARD 11)

add_executable(Hangman_gamev2 main.c hangman.c hangman.h)
