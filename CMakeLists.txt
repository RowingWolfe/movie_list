cmake_minimum_required(VERSION 3.5)

project(Sec13_Movie_Tracker LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Sec13_Movie_Tracker main.cpp movies.h movies.cpp movie.h movie.cpp)
