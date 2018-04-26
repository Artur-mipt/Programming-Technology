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
    virtual int UnitDamage() = 0;
    virtual void Upgrade() = 0;
};

// класс штурмовика
// помимо очков здоровья у него есть штурмовая винтовка и гранаты
class StormTrooper : public Unit {
public:
    int grenades = 3;
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
