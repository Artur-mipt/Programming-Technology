#include <iostream>
#include "Information/PrintInfo.h"
#include "Gameplay/Gameplay.h"

using namespace std;

int main() {
    PrintInfo* info = new PrintInfo;
    info->Intro();

    Terrorists* player1 = new Terrorists;
    CounterTerrorists* player2 = new  CounterTerrorists;

    for( int i = 0; i < 5; i++ ) {
        cout << "Номер хода: " << i + 1 << endl;
        cout << "Игрок 1, какого игрока добавить в комманду?" << endl;
        string s1, s2;
        cin >> s1;
        player1->AddTerrorist(s1);
        cout << "Игрок 2, какого игрока добавить в команду?" << endl;
        cin >> s2;
        player2->AddCTerrorist(s2);
    }

    info->AfterAddingUnits();

    Gameplay* game = new Gameplay(player1, player2);

    int step = 1;
    while( player1->IsAlive() && player2->IsAlive() ) {
        cout << "Номер хода: " << step << endl;
        step++;

        string s;
        int from, to;
        cout << "Игрок 2, Ваш ход:" << endl;
        cin >> s >> from >> to;
        if( s == "Attack" ) {
            game->CounterAttack(from, to);
        }
        if( s == "Heal" ) {
            game->CounterHeal(from, to);
        }

        cout << "Игрок 1, Ваш ход:" << endl;
        cin >> s >> from >> to;
        if( s == "Attack" ) {
            game->TerrAttack(from, to);
        }
        if( s == "Heal" ) {
            game->TerrHeal(from, to);
        }
    }

    info->EndOfGame(player1, player2);
}
