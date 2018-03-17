#pragma once
#include "Creators.h"
#include <iostream>
#include <vector>
#include <string>

class CTerrorists {
public:
    CTerrorists() = default;
    ~CTerrorists() = default;
    void AddCTerrorist(std::string type);
    void Info();

private:
    std::vector <Sapper*> sappers;
    std::vector <CTStormTrooper*> cStormers;
    std::vector <CTDoctor*> cDoctors;
    std::vector <CTSniper*> cSnipers;
    CounterCreator creator;
};

void CTerrorists::AddCTerrorist(std::string type) {
    bool rightName = false;
    if( type == "Sapper" ) {
        sappers.push_back(creator.CreateSapper());
    }
    if( type == "StormTrooper" ) {
        cStormers.push_back(creator.CreateCTStormTrooper());
    }
    if( type == "Doctor" ) {
        cDoctors.push_back(creator.CreateCTDoctor());
    }
    if( type == "Sniper" ) {
        cSnipers.push_back(creator.CreateCTSniper());
    }
}

void CTerrorists::Info() {
    std::cout << "sappers: " << sappers.size() << std::endl;
    std::cout << "stormers: " << cStormers.size() << std::endl;
    std::cout << "doctors: " << cDoctors.size() << std::endl;
    std::cout << "snipers: " << cSnipers.size() << std::endl;
}

