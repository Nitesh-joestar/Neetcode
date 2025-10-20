cmake_minimum_required(VERSION 4.0)
project(Neetcode)

set(CMAKE_CXX_STANDARD 20)

include_directories(CPP)

add_executable(Neetcode
        CPP/Demo.cpp
        CPP/Demo.h
        CPP/LinkedList.cpp
        CPP/LinkedList.h)
