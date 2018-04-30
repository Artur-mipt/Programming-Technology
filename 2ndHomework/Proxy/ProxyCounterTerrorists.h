#pragma once
#include "../Counter-Terrorists/Counter-Terrorists.h"

class ProxyTerrorists: public CounterTerrorists {
public:
    CounterTerrorists* team;

    ProxyTerrorists() {
        team = new CounterTerrorists;
    }
    void AddCTerrorist(string type) override {
        cout << "Adding terrorist" << endl;
        team->AddCTerrorist(type);
    }
    void Info() override {
        cout << "Printing info" << endl;
        team->Info();
    }
    void GetDamage() override {
        cout << "Getting damage" << endl;
        team->GetDamage();
    }

};