cmake_minimum_required(VERSION 4.1)
project(demo C)

set(CMAKE_C_STANDARD 99)

add_executable(demo main.c
        m.cpp)
