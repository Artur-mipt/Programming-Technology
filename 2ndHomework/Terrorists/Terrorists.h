#pragma once
#include "../Creator/Creators.h"
#include <iostream>
#include <vector>
#include <string>

class Terrorists {
public:
    Terrorists() = default;
    ~Terrorists() = default;
    void AddTerrorist(std::string type);
    void Info();
    void GetDamage();

private:
    // std::vector <BombHostage*> bombers;
    // std::vector <TStormTrooper*> tStormers;
    // std::vector <TDoctor*> tDoctors;
    // std::vector <TSniper*> tSnipers;
    std::vector <Unit*> allUnits;
    TerrCreator creator;
};