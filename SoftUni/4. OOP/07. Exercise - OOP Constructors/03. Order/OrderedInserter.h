#ifndef ORDERED_INSERTER_H  
#define ORDERED_INSERTER_H 
 
#include "Company.h"

#include <vector>
#include <algorithm>
 
class OrderedInserter {
    std::vector<const Company*> & companies;

    public:
        OrderedInserter(std::vector<const Company*> & companies)
            : companies(companies) {}

        void insert(const Company* c) {

            std::vector<const Company*>::iterator it = find_if(companies.begin(), companies.end(),
                [c] (const Company * curr) {
                    return curr->getId() > c->getId();
                });

            companies.insert(it, c);

        }

};


#endif // !ORDERED_INSERTER_H
