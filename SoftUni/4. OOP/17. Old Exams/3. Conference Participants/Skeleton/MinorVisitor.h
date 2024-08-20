#ifndef MinorVisitor_H
#define MinorVisitor_H

#include "Visitor.h"

class MinorVisitor : public Visitor {

    public:

        MinorVisitor(std::istream & istr) : Visitor(istr) {
            istr >> adultName >> adultSurname >> age;
        }

        virtual Type getType() const override { return Type(Participant::Type::MinorVisitor); }
        
        virtual std::string print() const override {
            std::ostringstream ostr;

            ostr << "Minor: " << Visitor::print() << " | " << age << " | accompanied by: " << adultSurname << ", " << adultName;

            return ostr.str();
        }

    protected:

        int age;

        std::string adultName, adultSurname;
};

#endif