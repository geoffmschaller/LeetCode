cmake_minimum_required(VERSION 3.26)
project(LeetCode)

set(CMAKE_CXX_STANDARD 23)

add_executable(LeetCode main.cpp
        solutions/TwoSum/TwoSum.cpp
        solutions/TwoSum/TwoSum.h)
