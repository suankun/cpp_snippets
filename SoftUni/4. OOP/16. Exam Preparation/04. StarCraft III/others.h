#ifndef _OTHERS_H_
#define _OTHERS_H_

#include <vector>
#include <memory>

#include "AirShip.h"

bool doDamage(AirShip * attacker, std::vector<std::unique_ptr<AirShip>> & enemyFleet, int damage);


#endif  // _OTHERS_H_