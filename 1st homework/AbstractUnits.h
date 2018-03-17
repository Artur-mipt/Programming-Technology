#pragma once
#include <string>

// класс штурмовика
// помимо очков здоровья у него есть штурмовая винтовка и гранаты
class StormTrooper {
public:
    int healthPoints;
    std::string assaultRiffle;
    int grenades;
};


// класс снайпера
// помимо очков здоровья у него есть снайперская винтовка
class Sniper {
public:
    int healthPoints;
    std::string sniperRiffle;
};


// класс медика
// у него есть пистолет и он умеет лечить союзников
class Doctor {
public:
    int healthPoints;
    std::string pistol;
    virtual void heal() {};
};


