#pragma once
#include "../Creator/Creators.h"
#include <iostream>
#include <vector>
#include <string>

class CounterTerrorists {
public:
    CounterTerrorists() = default;
    ~CounterTerrorists() = default;
    void AddCTerrorist(std::string type);
    void Info();
    void GetHealth();

private:
    std::vector <Sapper*> sappers;
    std::vector <CTStormTrooper*> cStormers;
    std::vector <CTDoctor*> cDoctors;
    std::vector <CTSniper*> cSnipers;
    CounterCreator creator;
};