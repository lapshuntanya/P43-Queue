cmake_minimum_required(VERSION 4.0)
project(P43_Queue)

set(CMAKE_CXX_STANDARD 20)

add_executable(P43_Queue main.cpp
        MyQueue.h
        MyPriorityQueue.h)
