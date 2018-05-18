#include "Counter-Terrorists.h"

void CounterTerrorists::AddCTerrorist(std::string type) {
    if( type == "Sapper" ) {
        allUnits.push_back(creator.CreateSapper());
    }
    if( type == "StormTrooper" ) {
        allUnits.push_back(creator.CreateCTStormTrooper());
    }
    if( type == "Doctor" ) {
        allUnits.push_back(creator.CreateCTDoctor());
    }
    if( type == "Sniper" ) {
        allUnits.push_back(creator.CreateCTSniper());
    }
}

int CounterTerrorists::GetDamage() {
    int total = 0;
    for( int i = 0; i < allUnits.size(); i++ ) {
        total += allUnits[i]->UnitDamage();
    }
    return total;
}

void CounterTerrorists::Info() {
    std::cout << std::endl;
    std::cout << "-- Команда контр-террористов --" << std::endl;
    std::cout << "Суммарный разовый дамаг команды: ";
    cout << GetDamage();
}

bool CounterTerrorists::IsAlive() {
    bool flag = false;
    for( int i = 0; i < allUnits.size(); i++ ) {
        if( allUnits[i]->healthPoints > 0 ) {
            flag = true;
        }
    }

    return flag;
}
