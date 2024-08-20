#ifndef GoldEmployee_H
#define GoldEmployee_H

#include "Sponsor.h"

class GoldEmployee : public Sponsor {

    public:
        GoldEmployee(std::istream & istr) : Sponsor(istr) {
            istr >> tShirtSize;
        }

        virtual Type getType() const override { return Type(Participant::Type::GoldEmployee); }

        virtual std::string print() const override {
            std::ostringstream ostr;

            ostr << "Gold: " << Participant::print() << " | " << company << " | " << tShirtSize;

            return ostr.str();
        }

    protected:

        std::string tShirtSize;

};




#endif