#include "Supplemental.h"

std::string Supply::getInfo() const {
    std::ostringstream ostr;
    ostr << getName() << ":" << quantity;
    return ostr.str();
}
