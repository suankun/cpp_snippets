#include "Phoenix.h"
#include "others.h"

#include <iostream>

Phoenix::Phoenix(const AirShipType type,
                const int         health,
                const int         damage,
                const int         maxShield,
                const int         shieldRegenerateRate,
                const int         shipId) 
    : ProtossAirShip(type, health, damage, maxShield, shieldRegenerateRate, shipId) {}

// virtual
void Phoenix::dealDamage( std::vector<std::unique_ptr<AirShip>> & enemyFleet) {
    // AirShip * victim = enemyFleet.back().get();

    doDamage(this, enemyFleet, _damage);
}