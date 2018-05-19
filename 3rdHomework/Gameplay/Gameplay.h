#pragma once
#include "../Terrorists/Terrorists.h"
#include "../Counter-Terrorists/Counter-Terrorists.h"

class Gameplay {
public:
    Terrorists* player1;
    CounterTerrorists* player2;

    Gameplay(Terrorists* player1, CounterTerrorists* player2);
    void TerrAttack(int from, int to);
    void CounterAttack(int from, int to);
    void TerrHeal(int from, int to);
    void CounterHeal(int from, int to);
    void AddingTerr(string s);
    void AddingCounter(string s);
    bool ThisIsTheEnd();
};
