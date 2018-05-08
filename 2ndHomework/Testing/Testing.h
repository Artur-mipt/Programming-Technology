#pragma once
#include <iostream>
#include "../Counter-Terrorists/Counter-Terrorists.h"
#include "../Terrorists/Terrorists.h"
#include "../Information/PrintInfo.h"
#include "../Proxy/ProxyTerrorists.h"

class TestingClass {
public:

    TestingClass();
    void InformationTesting();
    bool FactoryMethodTesting();
    bool CompositeTesting();
    bool DecoratorTesting();
    void ProxyTesting();

private:
    Terrorists* player1;
    CounterTerrorists* player2;
    PrintInfo* info;
};