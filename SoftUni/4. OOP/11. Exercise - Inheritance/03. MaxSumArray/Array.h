#ifndef _ARRAY_H_
#define _ARRAY_H_

#include <vector>

template<typename T>
class Array : public std::vector<T> {

    public:

        Array(size_t arrSize = 0) : std::vector<T>(arrSize) {}

        // T & operator [] (int index) { return (*this)[index]; }

        size_t getSize(void) const { return this->size(); }
};


#endif  // _ARRAY_H_