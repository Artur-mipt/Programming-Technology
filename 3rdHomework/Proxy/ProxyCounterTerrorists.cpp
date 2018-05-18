#include "ProxyCounterTerrorists.h"

ProxyCounterTerrorists::ProxyCounterTerrorists() {
    team = new CounterTerrorists;
}

void ProxyCounterTerrorists::AddCTerrorist(string type) {
    cout << "Adding counter-terrorist" << endl;
    team->AddCTerrorist(type);
}

void ProxyCounterTerrorists::Info() {
    cout << "Printing info" << endl;
    team->Info();
}

int ProxyCounterTerrorists::GetDamage() {
    cout << "Getting damage" << endl;
    team->GetDamage();
}