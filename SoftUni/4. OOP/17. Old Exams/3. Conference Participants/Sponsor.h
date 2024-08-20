#ifndef _SPONSOR_H_
#define _SPONSOR_H_

#include "Participant.h"
#include <string>

class Sponsor : public Participant {

    public:

        static Participant::Vector all;

        Sponsor(std::istream & istr) : Participant(istr) {
            istr >> company;
            all.push_back(this);
        }

        virtual std::string getCompany() const {
            return company;
        }

    protected:
        std::string company;
};

#endif  // _SPONSOR_H_
