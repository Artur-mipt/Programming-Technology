#include "Command.h"

Command::Command(Gameplay *game) {
    pgame = game;
}

void AddingTerrCommand::execute(string s) {
    pgame->AddingTerr(s);
}

void AddingCounterCommand::execute(string s) {
    pgame->AddingCounter(s);
}
