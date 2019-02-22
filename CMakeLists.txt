cmake_minimum_required(VERSION 3.13)
project(stos2 C)

set(CMAKE_C_STANDARD 99)

add_executable(stos2 main.c dane.h dane.c stos.h stos.c)