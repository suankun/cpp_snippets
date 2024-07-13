#ifndef LECTURE_H 
#define LECTURE_H 

#include <set>

#include "Resource.h"

namespace SoftUni {

    class Lecture {

        public:
            typedef std::set<Resource> ResourceSet;
            typedef std::map<ResourceType, int> ResourceCount;

        private:
            ResourceSet resources;
            ResourceCount count;

        public:

            ResourceSet::iterator begin() { return resources.begin(); }
            ResourceSet::iterator end() { return resources.end(); }

            Lecture & operator << (const Resource & r) {

                ResourceSet::iterator isFound = resources.find(r);
                if (isFound != resources.end()) {
                    ResourceType rt = r.getType();
                    resources.erase(isFound);
                    count[rt]--;
                    if (count[rt] == 0)
                        count.erase(rt);
                }
                
                resources.insert(r);
                count[r.getType()]++;

                return *this;
            }

            int operator [] (ResourceType rt) {
                return count[rt];
            }

            friend std::vector<ResourceType> & operator << (std::vector<ResourceType> & vec, Lecture & l);
        
    };

    std::vector<ResourceType> & operator << (std::vector<ResourceType> & vec, Lecture & l) {
        for (auto curr : l.count)
            vec.push_back(curr.first);

        return vec;
    }

}

#endif // !LECTURE_H 