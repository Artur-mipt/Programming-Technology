#pragma once
#include "../Counter-Terrorists/Counter-Terrorists.h"

class ProxyCounterTerrorists: public CounterTerrorists {
public:
    CounterTerrorists* team;

    ProxyCounterTerrorists();

    void AddCTerrorist(string type) override;

    void Info() override;

    int GetDamage() override;
};