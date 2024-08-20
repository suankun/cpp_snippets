#ifndef SUPERCOMPANY_H
#define SUPERCOMPANY_H

#include "Company.h"

class SuperCompany : public Company {

    public:

        SuperCompany(Company *c) : Company(*c) {}

        virtual bool isSuper(void) const override { return true; }

};

#endif