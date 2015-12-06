cmake_minimum_required(VERSION 3.3)
project(icpc3059)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES icpc3059.cpp)
add_executable(icpc3059 ${SOURCE_FILES})