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
    cout << "атаковать юнитов соперника или лечить своих, до тех пор пока одна" << endl;
    cout << "из команд не будет полностью уничтожена" << endl;

    cout << "Пример команды атаки:" << endl << "Attack 1 2 - Атаковать своим первым юнитом";
    cout << " второго юнита противника";

    cout << "Пример команды лечения:" << endl << "Heal 1 2 - Вылечить своим первым юнитом";
    cout << " своего второго юнита" << endl << endl;

    cout << "Игрок без хп не может ни атаковать, ни лечить" << endl;
    cout << "Лечить может только доктор, атаковать может кто угодно" << endl;
}

void PrintInfo::EndOfGame(Terrorists* player1, CounterTerrorists* player2) {
    cout << "Игра завершена. Победил: ";
    if( player1->IsAlive() ) {
        cout << "Игрок 1";
    } else {
        cout << "Игрок 2";
    }
}

void PrintInfo::LongGame() {
    cout << "Не хотите сыграть в расширенную версию (у всех юнитов увеличится хп)? (y/n)" << endl;
}