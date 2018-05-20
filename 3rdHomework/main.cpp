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
        s = game->CorrectTerrName(s);
        units.push_back(s);
        commands.push_back( new AddingTerrCommand(game) );

        cout << "Игрок 2, какого юнита добавить в команду?" << endl;
        cin >> s;
        s = game->CorrectCounterName(s);
        units.push_back(s);
        commands.push_back( new AddingCounterCommand(game) );
    }

    // паттерн Command воспроизводит создание команд
    for( int i = 0; i < 10; i++ ) {
        commands[i]->execute(units[i]);
    }

    info->LongGame();
    string isLongGame;
    cin >> isLongGame;
    if( isLongGame == "y" ) {
        auto subj = new Subject;
        auto terrObserver = new TerrObserver(player1);
        auto counterObserver = new CounterObserver(player2);
        subj->add(terrObserver);
        subj->add(counterObserver);
        subj->update();
        delete subj;
        delete terrObserver;
        delete counterObserver;
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
        s = game->CheckStep(s);
        if( s == "Attack" ) {
            game->CounterAttack(from - 1, to - 1);
        }
        if( s == "Heal" ) {
            game->CounterHeal(from - 1, to - 1);
        }

        cout << "Игрок 1, Ваш ход:" << endl;
        cin >> s >> from >> to;
        s = game->CheckStep(s);
        if( s == "Attack" ) {
            game->TerrAttack(from - 1, to - 1);
        }
        if( s == "Heal" ) {
            game->TerrHeal(from - 1, to - 1);
        }
    }

    info->EndOfGame(player1, player2);
}
