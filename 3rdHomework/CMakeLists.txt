cmake_minimum_required(VERSION 3.9)
project(2ndHomework)

set(CMAKE_CXX_STANDARD 11)

add_executable(3rdHomework main.cpp Terrorists/Terrorists.cpp Terrorists/Terrorists.h Counter-Terrorists/Counter-Terrorists.cpp Counter-Terrorists/Counter-Terrorists.h Creator/Creators.h Units/AbstractUnits.h Units/ConcreteUnits.h Information/PrintInfo.cpp Information/PrintInfo.h Decorator/Upgrades.h Proxy/ProxyTerrorists.cpp Proxy/ProxyTerrorists.h Proxy/ProxyCounterTerrorists.cpp Proxy/ProxyCounterTerrorists.h Testing/Testing.cpp Testing/Testing.h Gameplay/Gameplay.cpp Gameplay/Gameplay.h)