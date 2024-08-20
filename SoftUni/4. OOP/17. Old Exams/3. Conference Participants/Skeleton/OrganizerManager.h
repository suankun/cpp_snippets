#ifndef OrganizerManager_H
#define OrganizerManager_H

#include "Organizer.h"

class OrganizerManager : public Organizer {

    public:
        OrganizerManager(std::istream & istr) : Organizer(istr) {
            istr >> department;
        }

        virtual Type getType() const override { return Type(Participant::Type::OrganizerManager); }

        virtual std::string print() const override {
            std::ostringstream ostr;

            ostr << Organizer::print() << " | " << department;

            return ostr.str();
        }


    protected:

        std::string department;

};



#endif