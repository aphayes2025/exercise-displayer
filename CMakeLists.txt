cmake_minimum_required(VERSION 3.23)
project(exercise-displayer)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(exercise-displayer
        main.cpp
        SkiDisplayer.cpp
        SkiDisplayer.h
        RunDisplayer.cpp
        RunDisplayer.h
        BikeDisplayer.cpp
        BikeDisplayer.h
        ExerciseDisplayer.cpp
        ExerciseDisplayer.h)
