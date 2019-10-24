cmake_minimum_required(VERSION 3.15)
project(standard_library)

set(CMAKE_CXX_STANDARD 14)

add_executable(standard_library main.cpp catch.hpp)