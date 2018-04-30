#pragma once
#include "../Terrorists/Terrorists.h"

class ProxyTerrorists: public Terrorists {
public:
    Terrorists* team;

    ProxyTerrorists() {
        team = new Terrorists;
    }
    void AddTerrorist(string type) override {
        cout << "Adding terrorist" << endl;
        team->AddTerrorist(type);
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
