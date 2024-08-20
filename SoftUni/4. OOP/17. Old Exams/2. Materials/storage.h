#ifndef STORAGE_H
#define STORAGE_H

#include <map>
#include <sstream>
#include <iostream>

class Storage {

    public:
        typedef std::map<std::string, unsigned> Store; 

    private:
        Store storage;

    public:

        Store::iterator begin() { return storage.begin(); }
        Store::iterator end() { return storage.end(); }

        // returns `true` if the `storage` contains all `contents`
        // **Please remember:** 
        //   In the custom classes, every operator can do whatever functionality is needed, as far as 
        //   it can get its operands from correct operator syntax. In our case, it’s perfectly OK to use  
        //   the operator `<=` to verify if given contents exist in the storage.
        bool operator <= (Store & contents);

        // removes `contents` from the storage
        Storage & operator >> (Store & contents);

        // adds the `element` to the storage
        Storage & operator << (const std::string & element) {
            storage[element]++;
            return *this;
        }
};

#endif