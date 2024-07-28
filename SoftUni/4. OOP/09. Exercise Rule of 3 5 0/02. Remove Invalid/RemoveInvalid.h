#ifndef REMOVE_INVALID_H 
#define REMOVE_INVALID_H 
 
#include "Company.h" 

#include <list>
 
void removeInvalid(std::list<Company*> & companies) {
    std::list<Company*>::iterator it = companies.begin();

    for (; it != companies.end(); ) {

        if ((*it)->getId() < 0) {
            delete *it;  // the company is invalid
            it = companies.erase(it);
        }
        else
            it++;
    }


}


#endif // !REMOVE_INVALID_H