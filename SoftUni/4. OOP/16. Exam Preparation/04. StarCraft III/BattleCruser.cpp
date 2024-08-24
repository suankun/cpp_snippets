#include "BattleCruser.h"

#include "others.h"

#include <vector>
#include <memory>

BattleCruser::BattleCruser(const AirShipType type,
                     const int         health,
                     const int         damage,
                     const int         shipId)
    : TerranAirShip(type, health, damage, shipId) {}

// virtual
void BattleCruser::dealDamage(std::vector<std::unique_ptr<AirShip>> & enemyFleet) {
    int damage = _damage;
    
    if (_passedTurns % (YAMATO_CANNON_LOADING_TIME + 1) == 0)
        damage *= 5;

    doDamage(this, enemyFleet, damage);
}