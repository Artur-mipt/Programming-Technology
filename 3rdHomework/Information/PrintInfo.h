#pragma once
#include <iostream>
#include "../Terrorists/Terrorists.h"
#include "../Counter-Terrorists/Counter-Terrorists.h"

using namespace std;

class PrintInfo {
public:
    void Intro();
    void LongGame();
    void AfterAddingUnits();
    void EndOfGame(Terrorists* player1, CounterTerrorists* player2);
};