#ifndef _ARRAY_OF_POINTERS_
#define _ARRAY_OF_POINTERS_

#include "Company.h"
#include <vector>
#include <memory>

class ArrayOfPointers {
    std::vector<std::unique_ptr<Company>> data; 

    public:

        void add(Company* c) {
            data.push_back(std::unique_ptr<Company>(c));
        }

        size_t getSize(void) const {
            return data.size();
        }

        Company * get(size_t idx) {
            return data[idx].get();
        }
};


#endif  // _ARRAY_OF_POINTERS_