#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <memory>

class Participant {

    public:

        struct Type {

            enum Value {
                UNKNOWN = 0,
                OrganizerEmployee,
                OrganizerManager,
                AdultVisitor,
                MinorVisitor,
                SilverEmployee,
                GoldEmployee

            };

            Value value;

            Type() : value(UNKNOWN) {}
            Type(Value value) : value(value) {}

            operator std::string() const {
                switch(value) {
                    case OrganizerEmployee:
                        return "OE";
                    case OrganizerManager:
                        return "OM";
                    case AdultVisitor:
                        return "AV";
                    case MinorVisitor:
                        return "MV";
                    case SilverEmployee:
                        return "SE";
                    case GoldEmployee:
                        return "GE";     
                    case UNKNOWN:
                        break;    
                }

                return "UNKNOWN";
            }

            static Type fromStream(std::istream & is) {
                std::string str;

                is >> str;

                if (str == "OE")
                    return Type(OrganizerEmployee);
                else if (str == "OM")
                    return Type(OrganizerManager);
                else if (str == "AV")
                    return Type(AdultVisitor);
                else if (str == "MV")
                    return Type(MinorVisitor);
                else if (str == "SE")
                    return Type(SilverEmployee);
                else if (str == "GE")
                    return Type(GoldEmployee);

                return UNKNOWN;

            }

        };
        typedef std::vector<Participant *> Vector;

        static Vector all;

        virtual ~Participant() = default;

        Participant(std::istream & istr) {
            istr >> id >> name >> surname;
            all.push_back(this);
        }

        virtual Type getType(void) const = 0;

        virtual std::string print() const {
            std::ostringstream ostr;

            ostr << surname << ", " << name;

            return ostr.str();
        }

    private:

        int id;
        std::string name;
        std::string surname;

};

#endif