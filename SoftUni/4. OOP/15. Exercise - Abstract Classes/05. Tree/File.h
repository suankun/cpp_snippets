#ifndef _FILE_H_
#define _FILE_H_

#include "FileSystemObject.h"
#include "ByteContainer.h"

class File : public FileSystemObject, public ByteContainer {

    public:

        File(const std::string & name, const std::string & contents) : FileSystemObject(name), ByteContainer(contents) {}

        virtual size_t getSize() const override { return getBytes().size(); }
};


#endif  // _FILE_H_