#include "Supplemental.h"

bool Supplements::insert(Supplement* sup) {
    std::string name = sup->getName();
    if (data.find(name) == data.end()) {
        data[name] = std::unique_ptr<Supplement>(sup);
        return true;
    }
    return false;
}

Supplement* Supplements::get(const std::string& name) {
    auto it = data.find(name);
    return it != data.end() ? it->second.get() : nullptr;
}

std::string Supplements::getInfo() const {
    std::ostringstream info;

    bool bFirst = true;
    info << "[";
    for (const auto& pair : data) {

        if (!bFirst) {
            info << ", ";
        }
        bFirst = false;

        Supply* supply = dynamic_cast<Supply*>(pair.second.get());
        if (supply) {
            info << pair.first << ':' << supply->getQuantity();
        } else {
            info << pair.first;
        }

    }
    info << "]";

    if (info.str() == "[]")
        return "[empty]";

    return info.str();
}
