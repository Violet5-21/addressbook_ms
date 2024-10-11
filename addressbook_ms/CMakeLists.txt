cmake_minimum_required(VERSION 3.29)
project(addressbook_ms)

set(CMAKE_CXX_STANDARD 11)

add_executable(addressbook_ms main.cpp
        source.cpp
        addressbook.h)
