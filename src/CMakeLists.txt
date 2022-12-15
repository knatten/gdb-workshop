cmake_minimum_required(VERSION 3.22)
project(gdb_workshop)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(intro)
add_subdirectory(watchpoint)
add_subdirectory(watch_location)
add_subdirectory(conditional_breakpoints)
add_subdirectory(dependent_breakpoints)
add_subdirectory(threads)
