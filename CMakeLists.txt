cmake_minimum_required (VERSION 3.1)
project (c_samples)

#version number
set (tests_VERSION_MAJOR 0)
set (tests_VERSION_MINOR 1)

set(CMAKE_C_FLAGS "-std=c99 -g -Wall")
set(CMAKE_C_FLAGS_DEBUG ON)
set(CMAKE_VERBOSE_MAKEFILE ON)

add_executable (main main.c pointers_a.c pointers_b.c struct_a.c
                list_a.c callback.c)