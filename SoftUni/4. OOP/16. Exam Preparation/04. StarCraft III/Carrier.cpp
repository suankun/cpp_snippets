#include "Carrier.h"
#include "others.h"

#include <vector>
#include <memory>

Carrier::Carrier(const AirShipType type,
                const int         health,
                const int         damage,
                const int         maxShield,
                const int         shieldRegenerateRate,
                const int         shipId) 
    : ProtossAirShip(type, health, damage, maxShield, shieldRegenerateRate, shipId), _activeInterceptors(MAX_INTERCEPTORS) {}

// virtual
void Carrier::takeDamage(const int damage) {
    ProtossAirShip::takeDamage(damage);
    if (_currHealth < _maxHealth)
        _activeInterceptors = DAMAGED_STATUS_INTERCEPTORS;
}

// virtual
void Carrier::dealDamage(std::vector<std::unique_ptr<AirShip>> & enemyFleet) {
    for (size_t curIc = 0; curIc < _activeInterceptors; curIc++) {
        if (doDamage(this, enemyFleet, _damage))
            if (enemyFleet.empty())
                return;
    }
}
