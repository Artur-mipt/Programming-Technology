#include "Testing.h"


TestingClass::TestingClass() {
    player1 = new Terrorists;
    player2 = new CounterTerrorists;
    info = new PrintInfo;
}


void TestingClass::InformationTesting() {
    info->Intro();
}


bool TestingClass::FactoryMethodTesting() {
    string s1 = "Sapper";
    string s2 = "StormTrooper";
    string s3 = "Doctor";
    string s4 = "Sniper";
    string s5 = "BombHostage";

    player1->AddTerrorist(s2);
    if( player1->allUnits.size() != 1 ) {
        return false;
    }
    if( player1->allUnits[0]->healthPoints != 150) {
        return false;
    }
    player1->AddTerrorist(s3);
    player1->AddTerrorist(s4);
    player1->AddTerrorist(s5);

    player2->AddCTerrorist(s1);
    if( player2->allUnits.size() != 1 ) {
        return false;
    }
    if( player2->allUnits[0]->healthPoints != 80) {
        return false;
    }
    player2->AddCTerrorist(s2);
    player2->AddCTerrorist(s3);
    player2->AddCTerrorist(s4);

    if( player1->allUnits.size() != player2->allUnits.size() ) {
        return false;
    }

    return true;
}


bool TestingClass::CompositeTesting() {
    int firstDamage = player1->GetDamage();
    player1->AddTerrorist("Doctor");
    int secondDamage = player1->GetDamage();
    if( secondDamage - firstDamage != 30 ) {
        return false;
    }

    return true;
}


bool TestingClass::DecoratorTesting() {
    CTStormTrooper* newUnit = new CTStormTrooper;
    Unit* upgradedUnit = new UpgradeDamage( new UpgradeDamage(new UpgradeHealth(newUnit)) );

    int firstHealth = newUnit->healthPoints;
    upgradedUnit->Upgrade();
    int secondHealth = newUnit->healthPoints;
    if( secondHealth - firstHealth != 50 ) {
        return false;
    }

    return true;
}


void TestingClass::ProxyTesting() {
    Terrorists* player3 = new ProxyTerrorists;
    player3->AddTerrorist("StormTrooper");
    player3->GetDamage();
    player3->Info();
}
