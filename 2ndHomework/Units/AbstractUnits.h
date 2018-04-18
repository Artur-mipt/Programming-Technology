#pragma once
#include <string>

struct Weapon {
    std::string name;
    int damage;
};

// общий класс юнита
class Unit {
public:
    int healthPoints;
    Weapon weapon;
    int UnitHealth() {
        return healthPoints;
    }
};

// класс штурмовика
// помимо очков здоровья у него есть штурмовая винтовка и гранаты
class StormTrooper : public Unit {
public:
    int grenades;
};


// класс снайпера
// помимо очков здоровья у него есть снайперская винтовка
class Sniper : public Unit {
public:
    Weapon sniperRiffle;
};


// класс медика
// у него есть пистолет и он умеет лечить союзников
class Doctor : public Unit {
public:
    virtual void heal() {};
};
