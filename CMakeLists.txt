cmake_minimum_required(VERSION 3.16)
project(MIPT_navigator)

set(CMAKE_CXX_STANDARD 17)

set(SFML_DIR ../SFML/lib/cmake/SFML)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(MIPT_navigator
        main.cpp
        menu.h
        menu.cpp
        phystech_menu.h
        phystech_menu.cpp
        phystech_menu.h
        

        Character.cpp
        Character.h
        Fucker.cpp
        Game_Menu.cpp 
        Player.cpp 
        map.cpp        

        phystech_school.h
        phystech_school.cpp
        faki.h
        faki.cpp
        fbmf.h
        fbmf.cpp
        fefm.h
        fefm.cpp
        fpmi.h
        fpmi.cpp
        frkt.h
        frkt.cpp
        inbicst.h
        inbicst.cpp
        lfi.h
        lfi.cpp
        Counting_Points.h
        Counting_Points.cpp
        TextBar.h
        TextBar.cpp
        Exam.cpp

        )

target_link_libraries(MIPT_navigator sfml-graphics sfml-audio)