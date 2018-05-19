#pragma once
#include "../Counter-Terrorists/Counter-Terrorists.h"
#include "../Terrorists/Terrorists.h"

class Observer{
public:
    virtual void update() {};
};

class TerrObserver : public Observer{
public:
    Terrorists* terr;

    explicit TerrObserver(Terrorists* player){
        terr = player;
    }

    void update() override {
        for( int i = 0; i < terr->allUnits.size(); i++ ) {
            terr->allUnits[i]->healthPoints += 200;
        }
    }
};

class CounterObserver : public Observer{
public:
    CounterTerrorists* counter;

    explicit CounterObserver(CounterTerrorists* player){
        counter = player;
    }

    void update() override {
        for( int i = 0; i < counter->allUnits.size(); i++ ) {
            counter->allUnits[i]->healthPoints += 200;
        }
    }
};

class Subject{
public:
    vector <Observer*> updateList;

    void add(Observer* observer) {
        updateList.push_back(observer);
    }

    void update() {
        for( int i = 0; i < updateList.size(); i++ ) {
            updateList[i]->update();
        }
    }
};