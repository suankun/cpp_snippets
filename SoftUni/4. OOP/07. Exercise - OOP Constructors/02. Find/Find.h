#ifndef FIND_H 
#define FIND_H 
 
#include "Company.h" 

#include <vector>
#include <algorithm>
 
Company* find(std::vector<Company*> & companies, int searchId) {
    Company* c = new Company();
    
    // for (std::vector<Company*>::iterator it = companies.begin(); it != companies.end(); it++)
    //     if ((*it)->getId() == searchId)
    //         return *it;

    for (auto com : companies) {
        if (com->getId() == searchId)
            return com;
    }

    return nullptr;
}


#endif // !FIND_H
