#include "PrintInfo.h"

void PrintInfo::Intro() {
    cout << "Добро пожаловать!" << endl;
    cout << "Команда игрока 1 - террористы" << endl;
    cout << "Команда игрока 2 - контр-террористы" << endl;
    cout << "Теперь вы можете добавить по 5 юнитов в свои команды" << endl;

    cout << endl << "----Варианты выбора террористов----" << endl;
    cout << "BombHostage, Sniper, StormTrooper, Doctor" << endl;

    cout << endl << "----Варианты выбора контр-террористов----" << endl;
    cout << "Sapper, Sniper, StormTrooper, Doctor" << endl;

};

void PrintInfo::AfterAddingUnits() {
    cout << "Теперь, когда составы команд сформированы, вы будете по очереди" << endl;
    cout << "атаковать юнитов соперника, до тех пор пока одна из команд не будет" << endl;
    cout << "полностью уничтожена" << endl;

}

void PrintInfo::EndOfGame(Terrorists* player1, CounterTerrorists* player2) {
    cout << "Игра завершена. Победил: ";
    if( player1->IsAlive() ) {
        cout << "Игрок 1";
    } else {
        cout << "Игрок 2";
    }
}