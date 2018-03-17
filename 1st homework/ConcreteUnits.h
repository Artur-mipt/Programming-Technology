#pragma once
#include "AbstractUnits.h"

// класс подрывника (уникальный для террористов)
// у него есть пистолет и он может заложить бомбу
class BombHostage {
    int healthPoints;
    std::string pistol;
    virtual void plantTheBomb() {};
};


// класс сапёра (уникальный для контр-террористов)
// у него есть пистолет и он умеет обезвреживать бомбу
class Sapper {
    int healthPoints;
    std::string pistol;
    virtual void defuseTheBomb() {};
};


// штурмовкик контр-террористов
class CTStormTrooper : public StormTrooper {
public:
    CTStormTrooper() {
        healthPoints = 150;
        assaultRiffle = "M4A1";
        grenades = 3;
    }
};


// снайпер контр-террористов
class CTSniper : public Sniper {
public:
    CTSniper() {
        healthPoints = 50;
        sniperRiffle = "Scout";
    }
};


// медик контр-террористов
class CTDoctor : public Doctor {
public:
    CTDoctor() {
        healthPoints = 50;
        pistol = "Glock";
    }
    virtual void heal() override {};
};


// штурмовкик террористов
class TStormTrooper : public StormTrooper {
public:
    TStormTrooper() {
        healthPoints = 150;
        assaultRiffle = "AK-47";
        grenades = 3;
    }
};


// снайпер террористов
class TSniper : public Sniper {
public:
    TSniper() {
        healthPoints = 50;
        sniperRiffle = "Awp";
    }
};


// медик террористов
class TDoctor : public Doctor {
public:
    TDoctor() {
        healthPoints = 50;
        pistol = "Desert Eagle";
    }
};
