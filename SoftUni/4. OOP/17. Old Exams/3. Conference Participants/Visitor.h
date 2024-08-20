#ifndef VISITOR_H
#define VISITOR_H

#include "Participant.h"

class Visitor : public Participant
{
    public:

        static Participant::Vector all;

        Visitor(std::istream & istr) : Participant(istr) {
            all.push_back(this);
        }

};

#endif