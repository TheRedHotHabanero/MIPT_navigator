cmake_minimum_required(VERSION 3.19)
project(MIPT_navigator)

set(CMAKE_CXX_STANDARD 17)

set(SFML_DIR ../SFML/lib/cmake/SFML)


find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(MIPT_navigator
        main.cpp
        menu.cpp
        menu.h)

target_link_libraries(MIPT_navigator sfml-graphics sfml-audio)