#pragma once

#include "ConcreteUnits.h"

class CounterCreator {
public:
    Sapper* CreateSapper() {
        return new Sapper;
    }
    CTStormTrooper* CreateCTStormTrooper() {
        return new CTStormTrooper;
    }
    CTSniper* CreateCTSniper() {
        return new CTSniper;
    }
    CTDoctor* CreateCTDoctor() {
        return new CTDoctor;
    }
};

class TerrCreator {
public:
    BombHostage* CreateBombHostage() {
        return new BombHostage;
    }
    TStormTrooper* CreateTStormTrooper() {
        return new TStormTrooper;
    }
    TSniper* CreateTSniper() {
        return new TSniper;
    }
    TDoctor* CreateTDoctor() {
        return new TDoctor;
    }
};

