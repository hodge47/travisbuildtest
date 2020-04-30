cmake_minimum_required(VERSION 2.8)
project(BuildTest CXX)

include(gtest.cmake)
find_package(Threads)

set (CMAKE_CXX_STANDARD 11)
add_executable(buildtest src/main.cpp src/logic.hpp)


add_executable(buildtest-tests tests/main.cpp src/logic.hpp)
target_link_libraries(buildtest-tests gtest ${CMAKE_THREAD_LIBS_INIT})