cmake_minimum_required(VERSION 3.13)
project(NEH)

set(CMAKE_CXX_STANDARD 14)

add_executable(NEH main.cpp)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/data.txt
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})