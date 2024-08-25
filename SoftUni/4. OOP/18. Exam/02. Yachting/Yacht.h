#ifndef _YACHT_H_
#define _YACHT_H_

#include <string>
#include <sstream>

#include "Dockable.h"
#include "Supplemental.h"

class Yacht : public Dockable, public Named, public Info {

    std::string name;
    Supplements passengers;
    Supplements supplies;

    public:
        Yacht(const std::string & name)
            : name(name) {}

        // Dockable
        std::string dock() const override {
            return "Yacht " + name + " successfully docked.";
        }

        std::string undock() const override;

        bool onSupplementArrival(Supplement* s) override;

        // Info
        std::string getInfo() const override {
            std::ostringstream ostr;
            std::string pasInfo = passengers.getInfo();
            std::string supInfo = supplies.getInfo();

        if (pasInfo == "[]")
            pasInfo = "[empty]";

        if (supInfo == "[]")
            supInfo = "[empty]";

            ostr << "passengers " << pasInfo << " and supplies " << supInfo;

            return ostr.str();
        }

        // Named
        std::string getName() const override {
            return name;
        }

};

#endif  // _YACHT_H_
