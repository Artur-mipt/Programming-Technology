cmake_minimum_required(VERSION 3.9)
project(1stHomework)

set(CMAKE_CXX_STANDARD 11)

add_executable(1stHomework main.cpp Terrorists/Terrorists.h Counter-Terrorists/Counter-Terrorists.h Units/AbstractUnits.h Units/ConcreteUnits.h Creator/Creators.h Information/PrintInfo.h Counter-Terrorists/Counter-Terrorists.cpp Terrorists/Terrorists.cpp Information/PrintInfo.cpp)