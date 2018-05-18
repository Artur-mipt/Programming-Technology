#include "ProxyTerrorists.h"

ProxyTerrorists::ProxyTerrorists() {
    team = new Terrorists;
}

void ProxyTerrorists::AddTerrorist(string type) {
    cout << "Adding terrorist" << endl;
    team->AddTerrorist(type);
}

void ProxyTerrorists::Info() {
    cout << "Printing info" << endl;
    team->Info();
}

int ProxyTerrorists::GetDamage() {
    cout << "Getting damage" << endl;
    team->GetDamage();
}
