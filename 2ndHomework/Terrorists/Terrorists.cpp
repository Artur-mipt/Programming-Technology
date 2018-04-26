#include "Terrorists.h"

void Terrorists::AddTerrorist(std::string type) {
    if( type == "BombHostage" ) {
        allUnits.push_back(creator.CreateBombHostage());
    }
    if( type == "StormTrooper" ) {
        allUnits.push_back(creator.CreateTStormTrooper());
    }
    if( type == "Doctor" ) {
        allUnits.push_back(creator.CreateTDoctor());
    }
    if( type == "Sniper" ) {
        allUnits.push_back(creator.CreateTSniper());
    }
}

void Terrorists::GetDamage() {
    int total = 0;
    for( int i = 0; i < allUnits.size(); i++ ) {
        total += allUnits[i]->UnitDamage();
    }
    cout << total;
}

void Terrorists::Info() {
    std::cout << std::endl;
    std::cout << "-- Terrorists team --" << std::endl;
    std::cout << "total damage of team: ";
    GetDamage();
}
