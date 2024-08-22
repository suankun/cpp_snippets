#ifndef _BYTE_CONTAINER_H_
#define _BYTE_CONTAINER_H_

#include <string>

class ByteContainer {

    std::string contents;

    public:

        ByteContainer(const std::string & contents) : contents(contents) {}

        virtual const std::string & getBytes() const { return contents; }


};


#endif  // _BYTE_CONTAINER_H_