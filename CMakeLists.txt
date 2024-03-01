cmake_minimum_required(VERSION 3.27)
project(Hexagone_Mariage_Heureux)

set(CMAKE_CXX_STANDARD 23)

add_executable(Hexagone_Mariage_Heureux main.cpp
        Person.cpp
        Person.hpp
        Woman.cpp
        Woman.hpp
        Man.cpp
        Man.hpp)
