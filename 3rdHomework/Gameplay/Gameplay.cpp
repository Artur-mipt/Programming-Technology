#include "Gameplay.h"

Gameplay::Gameplay(Terrorists* terr, CounterTerrorists* counter) {
    player1 = terr;
    player2 = counter;
}

void Gameplay::TerrAttack(int from, int to) {
    if( player1->allUnits[from]->healthPoints > 0 ) {
        player2->allUnits[to]->healthPoints -= player1->allUnits[from]->UnitDamage();
    }
}

void Gameplay::CounterAttack(int from, int to) {
    if( player2->allUnits[from]->healthPoints > 0 ) {
        player1->allUnits[to]->healthPoints -= player2->allUnits[from]->UnitDamage();
    }
}

void Gameplay::TerrHeal(int from, int to) {
    if( player1->allUnits[from]->healthPoints > 0 ) {
        if( player1->allUnits[to]->healthPoints > 0 ) {
            player1->allUnits[to]->healthPoints += 50;
        }
    }
}

void Gameplay::CounterHeal(int from, int to) {
    if( player2->allUnits[from]->healthPoints > 0 ) {
        if( player2->allUnits[to]->healthPoints > 0 ) {
            player2->allUnits[to]->healthPoints += 50;
        }
    }
}

void Gameplay::AddingTerr(string s) {
    player1->AddTerrorist(s);
}

void Gameplay::AddingCounter(string s) {
    player2->AddCTerrorist(s);
}

bool Gameplay::ThisIsTheEnd() {
    return !( player1->IsAlive() and player2->IsAlive() );
}