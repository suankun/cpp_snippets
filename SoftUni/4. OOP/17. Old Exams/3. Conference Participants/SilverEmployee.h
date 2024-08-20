#ifndef _SILVER_EMPLOYEE_H_
#define _SILVER_EMPLOYEE_H_

#include "Sponsor.h"

class SilverEmployee : public Sponsor {

    public:
        SilverEmployee(std::istream & istr) : Sponsor(istr) {
            istr >> tShirtSize;
        }

        virtual Type getType() const override { return Type(Participant::Type::GoldEmployee); }

        virtual std::string print() const override {
            std::ostringstream ostr;

            ostr << "Silver: " << Participant::print() << " | " << company << " | " << tShirtSize;

            return ostr.str();
        }

    protected:

        std::string tShirtSize;

};



#endif  // _SILVER_EMPLOYEE_H_