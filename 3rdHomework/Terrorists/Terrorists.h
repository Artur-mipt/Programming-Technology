#pragma once
#include "../Creator/Creators.h"
#include "../Counter-Terrorists/Counter-Terrorists.h"
#include <iostream>
#include <vector>
#include <string>

class Terrorists {
public:
    Terrorists() = default;
    ~Terrorists() = default;
    virtual void AddTerrorist(std::string type);
    virtual void Info();
    virtual int GetDamage();
    virtual bool IsAlive();

    std::vector <Unit*> allUnits;
    TerrCreator creator;
};