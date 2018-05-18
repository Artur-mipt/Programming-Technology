#pragma once
#include "../Gameplay/Gameplay.h"

class Command {
public:
    Gameplay* pgame;

    virtual void execute(string s) = 0;
    explicit Command(Gameplay* game);
};

class AddingTerrCommand: public Command {
public:
    explicit AddingTerrCommand( Gameplay* p ) : Command(p) {}
    void execute(string s) override;
};

class AddingCounterCommand: public Command {
public:
    explicit AddingCounterCommand( Gameplay* p ) : Command(p) {}
    void execute(string s) override;
};
