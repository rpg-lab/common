cmake_minimum_required(VERSION 3.10)

project(rpg_common)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_CURRENT_BINARY_DIR})

add_library(rpg_common STATIC src/thread.c)

target_include_directories(rpg_common PUBLIC include)
