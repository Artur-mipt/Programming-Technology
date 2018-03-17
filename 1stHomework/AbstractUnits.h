#pragma once
#include <string>

// общий класс юнита
class Unit {
public:
    int healthPoints;
};

// класс штурмовика
// помимо очков здоровья у него есть штурмовая винтовка и гранаты
class StormTrooper : public Unit {
public:
    std::string assaultRiffle;
    int grenades;
};


// класс снайпера
// помимо очков здоровья у него есть снайперская винтовка
class Sniper : public Unit {
public:
    std::string sniperRiffle;
};


// класс медика
// у него есть пистолет и он умеет лечить союзников
class Doctor : public Unit {
public:
    std::string pistol;
    virtual void heal() {};
};
