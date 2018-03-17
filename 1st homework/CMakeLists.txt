cmake_minimum_required(VERSION 3.9)
project(strategy)

set(CMAKE_CXX_STANDARD 11)

add_executable(strategy main.cpp ConcreteUnits.h Creators.h Terrorists.h Counter-Terrorists.h AbstractUnits.h)