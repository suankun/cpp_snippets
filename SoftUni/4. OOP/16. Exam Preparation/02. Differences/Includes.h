#ifndef _INCLUDES_H_
#define _INCLUDES_H_

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

#include "City.h"

std::istream & operator >> (std::istream & in, City & c ) {
    unsigned int censusYear;
    std::string name;
    size_t population;

    in >> name >> population >> censusYear;

    c = City(censusYear, name, population);

    return in;
}

class CityDiff {

    City a, b;

    public:

        CityDiff(const City & a, const City & b) : a(a), b(b) {}

        friend std::ostream & operator << (std::ostream & ostr, const CityDiff & cd);
};

std::ostream & operator << (std::ostream & ostr, const CityDiff & cd) {
    if (cd.a.getName() == cd.b.getName()) {
        ostr << cd.a.getName() << " (" << cd.a.getCensusYear() <<
            " vs. " << cd.b.getCensusYear() << ")" << std::endl;
    }
    else {
        ostr << cd.a.getName() << " (" << cd.a.getCensusYear() <<
            ") vs. " << cd.b.getName() << " (" << cd.b.getCensusYear() << ")" << std::endl;
    }

    ostr << "population: ";

    int popDiff = cd.a.getPopulation() - cd.b.getPopulation();

    if (popDiff >= 0)
        ostr << "+";
    ostr << popDiff << std::endl;

    return ostr;
}

CityDiff operator - (const City & a, const City & b) {
    return CityDiff(a, b);
}

#endif  // _INCLUDES_H_