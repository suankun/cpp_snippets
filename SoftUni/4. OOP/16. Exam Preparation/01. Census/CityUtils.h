#ifndef _CITY_UTILS_H_
#define _CITY_UTILS_H_

#include <string>
#include <map>

#include "City.h"

const City * initCity(const std::string & name, size_t population) {
    return new City(name, population);
}

std::multimap<size_t, const City *> groupByPopulation(std::vector<const City*> & cities, size_t & totalPopulation) {
    std::multimap<size_t, const City *> ret;

    totalPopulation = 0;
    for (auto c : cities) {
        ret.insert(std::pair<size_t, const City *>(c->getPopulation(), c));
        totalPopulation += c->getPopulation();
    }

    return ret;
}


#endif  // _CITY_UTILS_H_