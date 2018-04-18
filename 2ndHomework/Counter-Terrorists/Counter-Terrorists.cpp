#include "Counter-Terrorists.h"

void CounterTerrorists::AddCTerrorist(std::string type) {
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

void CounterTerrorists::GetHealth() {
    int total = 0;
    for( int i = 0; i < sappers.size(); i++ ) {
        total += sappers[i]->healthPoints;
    }
    for( int i = 0; i < cStormers.size(); i++ ) {
        total += cStormers[i]->healthPoints;
    }
    for( int i = 0; i < cDoctors.size(); i++ ) {
        total += cDoctors[i]->healthPoints;
    }
    for( int i = 0; i < cSnipers.size(); i++ ) {
        total += cSnipers[i]->healthPoints;
    }
    cout << total;
}

void CounterTerrorists::Info() {
    std::cout << std::endl;
    std::cout << "Counter-terrorists team:" << std::endl;
    std::cout << "sappers: " << sappers.size() << std::endl;
    std::cout << "stormers: " << cStormers.size() << std::endl;
    std::cout << "doctors: " << cDoctors.size() << std::endl;
    std::cout << "snipers: " << cSnipers.size() << std::endl;
    std::cout << "total health of team: ";
    GetHealth();
}