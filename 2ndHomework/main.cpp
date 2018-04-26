#include <iostream>
#include "Counter-Terrorists/Counter-Terrorists.h"
#include "Terrorists/Terrorists.h"
#include "Information/PrintInfo.h"
#include "Decorator/Upgrades.h"
using namespace std;

int main() {
    PrintInfo info;
    info.Intro();

    Terrorists player1;
    CounterTerrorists player2;

    string s1 = "Sapper";
    string s2 = "StormTrooper";
    string s3 = "Doctor";
    string s4 = "Sniper";
    string s5 = "BombHostage";

    // проверка паттерна Abstract Method
    player1.AddTerrorist(s2);
    player1.AddTerrorist(s3);
    player1.AddTerrorist(s4);
    player1.AddTerrorist(s5);
    player2.AddCTerrorist(s1);
    player2.AddCTerrorist(s2);
    player2.AddCTerrorist(s3);
    player2.AddCTerrorist(s4);

    // проверка паттерна Composite
    player1.Info();
    cout << endl << endl;
    player2.Info();
    cout << endl << endl;

    // проверка паттерна Decorator
    UnitForUpgrade* newUnit = new UnitForUpgrade;
    Unit* upgradedUnit = new UpgradeHealth( new UpgradeHealth(new UpgradeDamage(newUnit)) );
    cout << "Before upgrade:" << endl;
    cout << "Health = " << newUnit->healthPoints << endl;
    cout << "Damage = " << newUnit->UnitDamage() << endl << endl;
    upgradedUnit->Upgrade();
    cout << "After upgrade:" << endl;
    cout << "Health = " << newUnit->healthPoints << endl;
    cout << "Damage = " << newUnit->UnitDamage() << endl << endl;
}