#ifndef _TREE_H_
#define _TREE_H_

#include <list>
#include <iostream>
#include <memory>
#include <string>
#include <sstream>

class Tree {

    static size_t cnt;

    public:

        Tree() {
            cnt = 1;
        }

        virtual ~Tree() {}

        virtual const std::string getName() const = 0;
        virtual const std::string getLeaves() const = 0;
        virtual const std::string getProduction() const = 0;
        virtual const std::string getGreatness() const = 0;

        void outputTree(std::ostream & ostr) const {
            ostr << cnt << ". " << getName() << " tree with " << getLeaves() 
            << " leaves, which produces " << getProduction() 
            << " and is great for " << getGreatness() << "." << std::endl;
            
            cnt++;
        }

        static size_t getCount() { return cnt; }
};

#endif  // _TREE_H_
