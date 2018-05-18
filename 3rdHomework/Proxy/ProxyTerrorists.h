#pragma once
#include "../Terrorists/Terrorists.h"

class ProxyTerrorists: public Terrorists {
public:
    Terrorists* team;

    ProxyTerrorists();

    void AddTerrorist(string type) override;

    void Info() override;

    int GetDamage() override;
};
