#ifndef _SOLUTION_H_
#define _SOLUTION_H_

#include <iostream>
#include "Participant.h"

std::ostream& operator<<(std::ostream& os, const Participant::Vector& participants) {
    if (participants.empty())
        os << "- none" << std::endl;
    else
        for (const Participant* participant : participants)
            os << "- " << participant->print() << std::endl;

    return os;
}

#endif  // _SOLUTION_H_