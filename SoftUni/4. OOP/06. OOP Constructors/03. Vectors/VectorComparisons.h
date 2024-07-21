#ifndef _VECTOR_COMPARISONS_H_
#define _VECTOR_COMPARISONS_H_

#include "Vector.h"

class VectorLengthComparer {
    public:

        bool operator() (const Vector & a, const Vector & b) const {
            return a.getLength() < b.getLength();
        }
};

template<typename Type, typename Comparer>
class ReverseComparer {

    Comparer comp;

    public:

        bool operator() (const Type & a, const Type & b) {
            return !comp(a, b);
        }


};


#endif // _VECTOR_COMPARISONS_H_