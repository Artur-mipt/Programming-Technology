#pragma once
#include "../Units/AbstractUnits.h"
#include <iostream>

class UnitForUpgrade : public Unit {
public:
    UnitForUpgrade() {
        weapon.damage = 30;
        weapon.name = "knife";
        healthPoints = 70;
    }

    int UnitDamage() override {
        return weapon.damage;
    }

    void Upgrade() override {};

};


class UpgradeWrapper : public Unit {
public:
    Unit* inner;

    explicit UpgradeWrapper(Unit* unit) {
        inner = unit;
    }

    void Upgrade() override {
        inner->Upgrade();
    }

};


class UpgradeHealth : public UpgradeWrapper {
public:
    explicit UpgradeHealth(Unit* wrappedUnit): UpgradeWrapper(wrappedUnit) {}

    int UnitDamage() override {
        return weapon.damage;
    }

    void Upgrade() override {
        UpgradeWrapper::Upgrade();
        inner->healthPoints += 50;
    }
};


class UpgradeDamage : public UpgradeWrapper {
public:
    explicit UpgradeDamage(Unit* wrappedUnit): UpgradeWrapper(wrappedUnit) {}

    int UnitDamage() override {
        return weapon.damage;
    }

    void Upgrade() override {
        UpgradeWrapper::Upgrade();
        inner->weapon.damage += 50;
    }
};