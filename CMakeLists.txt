cmake_minimum_required(VERSION 3.10)
project(fumo LANGUAGES CXX)
SET(CMAKE_CXX_STANDARD 23)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)
SET(CMAKE_CXX_EXTENSIONS OFF)

include(cmake/CPM.cmake)
include(cmake/Dependencies.cmake)

add_executable(fumo main.cpp)