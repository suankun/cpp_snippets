#include "Viking.h"
#include "others.h"

#include <iostream>

Viking::Viking(const AirShipType type,
               const int         health,
               const int         baseDamage,
               const int         shipId) 
    : TerranAirShip(type, health, baseDamage, shipId) {}

// virtual
void Viking::dealDamage(std::vector<std::unique_ptr<AirShip>> & enemyFleet) {
    AirShip * victim = enemyFleet.back().get();
    int damage = victim->getAirShipType() == AirShipType::PHOENIX ? _damage * 2 : _damage;

    doDamage(this, enemyFleet, damage);

}