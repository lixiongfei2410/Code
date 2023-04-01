cmake_minimum_required(VERSION 3.15)
project(Hello_tread)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++11 -pthread")

add_executable(Hello_tread main.cpp)