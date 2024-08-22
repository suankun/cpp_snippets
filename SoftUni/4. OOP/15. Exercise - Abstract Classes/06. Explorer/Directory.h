#ifndef _DIRECTORY_
#define _DIRECTORY_

#include "FileSystemObjectsContainer.h"

#include <vector>
#include <algorithm>

class Directory : public FileSystemObject, public FileSystemObjectsContainer {

    std::vector<std::shared_ptr<FileSystemObject>> contents;

    public:

        Directory(const std::string & name) : FileSystemObject(name) {}

	    virtual void add(const std::shared_ptr<FileSystemObject>& obj) {
            contents.push_back(obj);
        }

        virtual size_t getSize() const override {
            size_t res = 0;

            for (auto c : contents)
                res += c.get()->getSize();

            return res;
        }

        virtual std::vector<std::shared_ptr<FileSystemObject> >::const_iterator begin() const override {
            return contents.begin();
        }

	    virtual std::vector<std::shared_ptr<FileSystemObject> >::const_iterator end() const override {
            return contents.end();
        }

        virtual void remove(std::shared_ptr<FileSystemObject> obj) override {
            auto it = find(contents.begin(), contents.end(), obj);
            if (it != contents.end())
                contents.erase(it);
        }

};


#endif  // _DIRECTORY_