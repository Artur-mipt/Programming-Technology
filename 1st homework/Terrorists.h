#pragma once
#include "Creators.h"
#include <iostream>
#include <vector>
#include <string>

class Terrorists {
public:
    Terrorists() = default;
    ~Terrorists() = default;
    void AddTerrorist(std::string type);
    void Info();

private:
    std::vector <BombHostage*> bombers;
    std::vector <TStormTrooper*> tStormers;
    std::vector <TDoctor*> tDoctors;
    std::vector <TSniper*> tSnipers;
    TerrCreator creator;
};

void Terrorists::AddTerrorist(std::string type) {
    if( type == "BombHostage" ) {
        bombers.push_back(creator.CreateBombHostage());
    }
    if( type == "StormTrooper" ) {
        tStormers.push_back(creator.CreateTStormTrooper());
    }
    if( type == "Doctor" ) {
        tDoctors.push_back(creator.CreateTDoctor());
    }
    if( type == "Sniper" ) {
        tSnipers.push_back(creator.CreateTSniper());
    }
}

void Terrorists::Info() {
    std::cout << "bombers: " << bombers.size() << std::endl;
    std::cout << "stormers: " << tStormers.size() << std::endl;
    std::cout << "doctors: " << tDoctors.size() << std::endl;
    std::cout << "snipers: " << tSnipers.size() << std::endl;
}
