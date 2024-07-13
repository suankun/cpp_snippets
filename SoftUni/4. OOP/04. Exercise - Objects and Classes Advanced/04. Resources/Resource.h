#ifndef RESOURCE_H 
#define RESOURCE_H 
 
#include "ResourceType.h" 
 
namespace SoftUni {

    class Resource {
        int id;
        ResourceType rt;
        std::string link;

        public:

            int getId(void) const { return id; }
            ResourceType getType(void) const { return rt; }
            const std::string getLink(void) const { return link; }

            friend std::istream & operator >> (std::istream & in, Resource & r);

            bool operator < (const Resource & other) const {
                return this->id < other.id;
            }

    };

    std::istream & operator >> (std::istream & in, enum ResourceType & t) {
        std::string buf;
        in >> buf;

        if (buf == "Demo")
            t = ResourceType::DEMO;
        else if (buf == "Presentation")
            t = ResourceType::PRESENTATION;
        else if (buf == "Video")
            t = ResourceType::VIDEO;

        return in;
    }

    // friend
    std::istream & operator >> (std::istream & in, Resource & r) {
        in >> r.id;
        in >> r.rt; in.ignore();
        getline(in, r.link);

        return in;
    }

    std::ostream & operator << (std::ostream & out, const Resource & r) {
        out << r.getId() << ' ' << r.getType() << ' ' << r.getLink();

        return out;
    }

}
 
#endif // !RESOURCE_H 
