#include <iostream>
#include "Information/PrintInfo.h"
#include "Gameplay/Gameplay.h"
#include "Command/Command.h"
#include "Observer/Observer.h"

using namespace std;

int main() {
    PrintInfo* info = new PrintInfo;
    info->Intro();

    Terrorists* player1 = new Terrorists;
    CounterTerrorists* player2 = new  CounterTerrorists;

    Gameplay* game = new Gameplay(player1, player2);

    vector <Command*> commands;
    vector <string> units;

    for( int i = 0; i < 5; i++ ) {
        cout << "Номер хода: " << i + 1 << endl;
        cout << "Игрок 1, какого юнита добавить в комманду?" << endl;
        string s;
        cin >> s;
        units.push_back(s);
        commands.push_back( new AddingTerrCommand(game) );

        cout << "Игрок 2, какого юнита добавить в команду?" << endl;
        cin >> s;
        units.push_back(s);
        commands.push_back( new AddingCounterCommand(game) );
    }

    // паттерн Command воспроизводит создание команд
    for( int i = 0; i < 10; i++ ) {
        commands[i]->execute(units[i]);
    }

    info->LongGame();
    string s;
    cin >> s;
    if( s == "y" ) {
        Subject* subj = new Subject;
        TerrObserver* terrObserver = new TerrObserver(player1);
        CounterObserver* counterObserver = new CounterObserver(player2);
        subj->add(terrObserver);
        subj->add(counterObserver);
        subj->update();
    }

    info->AfterAddingUnits();

    int step = 1;
    while( !game->ThisIsTheEnd() ) {
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
