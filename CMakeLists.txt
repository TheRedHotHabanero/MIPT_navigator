cmake_minimum_required(VERSION 3.19)
project(MIPT_navigator)

set(CMAKE_CXX_STANDARD 14)

if (WIN32)
    set(SFML_DIR ../SFML-2.5.1/lib/cmake/SFML)
endif()

include_directories(.)

add_executable(MIPT_navigator
        menu.cpp
        menu.h
        phystech_school.cpp)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)