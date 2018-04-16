#pragma once
#include "AbstractUnits.h"
using namespace std;


// класс подрывника (уникальный для террористов)
// у него есть пистолет и он может заложить бомбу
class BombHostage : public Unit {
public:
    virtual void plantTheBomb() {};
    BombHostage() {
        weapon.name = "Desert Eagle";
        weapon.damage = 30;
        healthPoints = 80;
    }
};

// класс сапёра (уникальный для контр-террористов)
// у него есть пистолет и он умеет обезвреживать бомбу
class Sapper : public Unit {
public:
    virtual void defuseTheBomb() {};
    Sapper() {
        weapon.name = "Glock";
        weapon.damage = 30;
        healthPoints = 80;
    }
};


// штурмовкик контр-террористов
class CTStormTrooper : public StormTrooper {
public:
    CTStormTrooper() {
        healthPoints = 150;
        weapon.name = "M4A1";
        weapon.damage = 70;
        grenades = 3;
    }
};


// снайпер контр-террористов
class CTSniper : public Sniper {
public:
    CTSniper() {
        weapon.name = "Glock";
        weapon.damage = 30;
        healthPoints = 50;
        sniperRiffle.name = "Scout";
        sniperRiffle.damage = 100;
    }
};


// медик контр-террористов
class CTDoctor : public Doctor {
public:
    CTDoctor() {
        healthPoints = 50;
        weapon.name = "Glock";
        weapon.damage = 30;
    }
    virtual void heal() override {};
};


// штурмовкик террористов
class TStormTrooper : public StormTrooper {
public:
    TStormTrooper() {
        healthPoints = 150;
        weapon.name = "AK-47";
        weapon.damage = 70;
        grenades = 3;
    }
};


// снайпер террористов
class TSniper : public Sniper {
public:
    TSniper() {
        weapon.name = "Desert Eagle";
        weapon.damage = 30;
        healthPoints = 50;
        sniperRiffle.name = "Awp";
        sniperRiffle.damage = 100;
    }
};


// медик террористов
class TDoctor : public Doctor {
public:
    TDoctor() {
        healthPoints = 50;
        weapon.name = "Desert Eagle";
        weapon.damage = 30;
    }
    virtual void heal() override {};
};
