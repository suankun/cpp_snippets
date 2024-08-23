#ifndef _FILTER_FACTORY_H_
#define _FILTER_FACTORY_H_

#include "Filter.h"

#include <string>

class AZFilter : public Filter {

    protected:

        virtual bool shouldFilterOut(char symbol) const override {
            return (symbol >= 'A' && symbol <= 'Z');
        }
};

class azFilter : public Filter {

    protected:

        virtual bool shouldFilterOut(char symbol) const override {
            return (symbol >= 'a' && symbol <= 'z');
        }
};

class Filter09 : public Filter {

    protected:

        virtual bool shouldFilterOut(char symbol) const override {
            return (symbol >= '0' && symbol <= '9');
        }
};

class FilterFactory {

    public:
        Filter * buildFilter(const std::string & filterDefinition) const {
            switch (filterDefinition[0])
            {
                case 'A': return new AZFilter; break;
                case 'a': return new azFilter; break;
                case '0': return new Filter09; break;
            }
        }

};

#endif  // _FILTER_FACTORY_H_