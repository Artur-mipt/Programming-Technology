#include "Gameplay.h"

Gameplay::Gameplay(Terrorists* terr, CounterTerrorists* counter) {
    player1 = terr;
    player2 = counter;
}

bool Gameplay::IncorrectUnitNumber(int from, int to) {
    try {
        if( from > 4 || from < 0 ) {
            throw from;
        }
        if( to > 4 || to < 0 ) {
            throw to;
        }
    }
    catch(int i) {
        cout << "Грубейшая ошибка. Нет юнита с номером " << i + 1 << endl;
        cout << "Юниты нумеруются от 1 до 5. Учтите это в дальнейшем" << endl;
        return true;
    }

    return false;
}

void Gameplay::TerrAttack(int from, int to) {
    if( !IncorrectUnitNumber(from, to) ) {
        if (player1->allUnits[from]->healthPoints > 0) {
            player2->allUnits[to]->healthPoints -= player1->allUnits[from]->UnitDamage();
        }
    }
}

void Gameplay::CounterAttack(int from, int to) {
    if( !IncorrectUnitNumber(from, to) ) {
        if( player2->allUnits[from]->healthPoints > 0 ) {
            player1->allUnits[to]->healthPoints -= player2->allUnits[from]->UnitDamage();
        }
    }
}

void Gameplay::TerrHeal(int from, int to) {
    if( !IncorrectUnitNumber(from, to) ) {
        if( player1->allUnits[from]->healthPoints > 0 ) {
            if( player1->allUnits[to]->healthPoints > 0 ) {
                player1->allUnits[to]->healthPoints += 50;
            }
        }
    }
}

void Gameplay::CounterHeal(int from, int to) {
    if( !IncorrectUnitNumber(from, to) ) {
        if( player2->allUnits[from]->healthPoints > 0 ) {
            if( player2->allUnits[to]->healthPoints > 0 ) {
                player2->allUnits[to]->healthPoints += 50;
            }
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

string Gameplay::CorrectTerrName(string s) {
    while( s != "BombHostage" && s != "Sniper" && s != "StormTrooper"
           && s != "Doctor" ) {
        cout << "Специализация юнита введена некорректно. Попробуйте еще раз:" << endl;
        cin >> s;
    }
    return s;
}

string Gameplay::CorrectCounterName(string s) {
    while( s != "Sapper" && s != "Sniper" && s != "StormTrooper"
           && s != "Doctor" ) {
        cout << "Специализация юнита введена некорректно. Попробуйте еще раз:" << endl;
        cin >> s;
    }
    return s;
}

string Gameplay::CheckStep(string s) {
    while( s != "Attack" && s != "Heal" ) {
        cout << "Действие введено неверно. ";
        cout << "Попробуйте еще раз (введите Attack или Heal):" << endl;
        cin >> s;
    }
    return s;
}