#ifndef ORGANIZER_H
#define ORGANIZER_H

#include "Participant.h"

class Organizer : public Participant {

    public:

        static Participant::Vector all;

        Organizer(std::istream & istr) : Participant(istr) {
            all.push_back(this);
        }

};


#endif