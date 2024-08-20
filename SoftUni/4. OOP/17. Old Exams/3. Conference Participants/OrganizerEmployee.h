#ifndef OrganizerEmployee_H
#define OrganizerEmployee_H

#include "Organizer.h"

class OrganizerEmployee : public Organizer {

    public:

        OrganizerEmployee(std::istream & istr) : Organizer(istr) {
            istr >> managerName >> managerSurname;
        }

        virtual Type getType() const override { return Type(Participant::Type::OrganizerEmployee); }

        virtual std::string print() const override {
            std::ostringstream ostr;

            ostr << Organizer::print() << " | manager: " << managerSurname << ", " << managerName;

            return ostr.str();
        }

    private:

        std::string managerName, managerSurname;

};



#endif