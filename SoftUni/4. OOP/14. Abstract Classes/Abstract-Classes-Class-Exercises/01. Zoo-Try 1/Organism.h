#ifndef ORGANISM_H
#define ORGANISM_H

#include "Position.h"

#include <string>

class Organism {

protected:

    std::string name;
	Position position;

    int actsInCurrentState;

public:

    // Organism() {}
    Organism(const std::string & name, const Position & Position)
        : name(name), position(position) {}

    Position getPosition() const {
		return this->position;
	}

    virtual ~Organism() = default;

    virtual void move() = 0;
    virtual void act() = 0;
    virtual std::string getImage() const = 0;

};

#endif // !ORGANISM_H

