#pragma once
#include "../Creator/Creators.h"
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

private:
    std::vector <Unit*> allUnits;
    TerrCreator creator;
};