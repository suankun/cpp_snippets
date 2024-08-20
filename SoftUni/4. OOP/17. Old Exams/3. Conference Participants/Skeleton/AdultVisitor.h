#ifndef AdultVisitor_H
#define AdultVisitor_H

#include "Visitor.h"

class AdultVisitor : public Visitor {

    public:

        AdultVisitor(std::istream & istr) : Visitor(istr) {
            istr >> accountId;
        }

        virtual Type getType() const override { return Type(Participant::Type::AdultVisitor); }

        virtual std::string print() const override {
            std::ostringstream ostr;

            ostr << Visitor::print() << " | " << accountId;

            return ostr.str();
        }

    protected:

        std::string accountId;
};


#endif