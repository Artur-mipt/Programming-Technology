#include <iostream>
#include "Counter-Terrorists.h"
#include "Terrorists.h"
using namespace std;

int main() {
    cout << "Welcome to the game!" << endl;
    cout << "Team of Player1 - terrorists" << endl;
    cout << "Team of Player2 - counter-terrorists" << endl;
    cout << "Now you can add 5 units to your team " << endl;

    cout << endl << "----Types of terrorists----" << endl;
    cout << "BombHostage, Sniper, StormTrooper, Doctor" << endl;

    cout << endl << "----Types of counter-terrorists----" << endl;
    cout << "Sapper, Sniper, StormTrooper, Doctor" << endl;


    Terrorists player1;
    CTerrorists player2;

    for( int i = 0; i < 5; i++ ) {
        cout << endl << endl << "STEP " << i + 1 << endl;
        cout << "player1, add new unit: ";
        string s1;
        cin >> s1;
        player1.AddTerrorist(s1);
        cout << endl << "player2, add new unit: ";
        string s2;
        cin >> s2;
        player2.AddCTerrorist(s2);
    }

    cout << endl << endl << "Game finished, now you can see your teams" << endl;

    cout << "---player1 (terrorists)---";
    player1.Info();

    cout << "---player2 (counter-terrorists)---";
    player2.Info();
}