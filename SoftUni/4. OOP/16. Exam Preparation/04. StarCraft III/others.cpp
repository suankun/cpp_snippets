#include "others.h"
#include "AirShip.h"

#include <iostream>


bool doDamage(AirShip * attacker, std::vector<std::unique_ptr<AirShip>> & enemyFleet, int damage) {
    AirShip * victim = enemyFleet.back().get();

    victim->takeDamage(damage);

    if (!victim->isAlive()) {
        switch (attacker->getAirShipType())
        {
            case AirShipType::VIKING:        std::cout << "Viking"; break;
            case AirShipType::BATTLE_CRUSER: std::cout << "BattleCruser"; break;
            case AirShipType::CARRIER:       std::cout << "Carrier"; break;
            case AirShipType::PHOENIX:       std::cout << "Phoenix"; break;
        }

        std::cout << " with ID: " << attacker->getAirShipId() << " killed enemy airship with ID: " << victim->getAirShipId() << std::endl;
        
        enemyFleet.pop_back();

        return true;
    }

    return false;
}