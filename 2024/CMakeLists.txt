cmake_minimum_required(VERSION 3.24)

set(CMAKE_EXPORT_COMPILE_COMMANDS on)
set(CMAKE_C_STANDARD 23)
set(CMAKE_C_COMPILER clang)

project(advent_of_code LANGUAGES C)

add_subdirectory(src)
