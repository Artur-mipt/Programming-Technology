#include <iostream>
#include "Counter-Terrorists.h"
#include "Terrorists.h"
#include "PrintInfo.h"
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

    player1.AddTerrorist(s2);
    player1.AddTerrorist(s3);
    player1.AddTerrorist(s4);
    player1.AddTerrorist(s5);
    player2.AddCTerrorist(s1);
    player2.AddCTerrorist(s2);
    player2.AddCTerrorist(s3);
    player2.AddCTerrorist(s4);

    player1.Info();
    player2.Info();
}