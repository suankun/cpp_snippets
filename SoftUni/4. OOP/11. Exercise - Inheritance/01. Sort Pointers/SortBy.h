#ifndef SORT_BY_H 
#define SORT_BY_H 
 
#include "Company.h" 

#include <algorithm>
 
void sortBy(Company** companyPtrBegin, Company** companyPtrEnd, bool (*compare)(const Company& a, const Company& b)) {
    struct SortFunc {
        bool (*compare)(const Company& a, const Company& b);

        SortFunc(bool (*compare)(const Company& a, const Company& b)) : compare(compare) {}

        bool operator()(Company *first, Company *second) {
            return compare(*first, *second);
        }
    };
    
    std::sort(companyPtrBegin, companyPtrEnd, SortFunc(compare));
}


#endif // !SORT_BY_H