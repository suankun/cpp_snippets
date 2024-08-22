#ifndef _EXPLORER_H_
#define _EXPLORER_H_

#include <memory>
#include <vector>

#include "FileSystemObject.h"
#include "FileSystemObjectsContainer.h"
#include "Shortcuts.h"
#include "File.h"
#include "Directory.h"

class Root : public FileSystemObject, public FileSystemObjectsContainer {

    std::vector<std::shared_ptr<FileSystemObject> > & rootObjects;

    public:

        Root(std::vector<std::shared_ptr<FileSystemObject> > & rootObjects)
            : FileSystemObject(""), rootObjects(rootObjects) {}

        virtual void add(const std::shared_ptr<FileSystemObject>& obj) {
            rootObjects.push_back(obj);
        }

        virtual size_t getSize() const override {
            size_t res = 0;

            for (auto c : rootObjects)
                res += c.get()->getSize();

            return res;
        }

        virtual std::vector<std::shared_ptr<FileSystemObject> >::const_iterator begin() const override {
            return rootObjects.begin();
        }

	    virtual std::vector<std::shared_ptr<FileSystemObject> >::const_iterator end() const override {
            return rootObjects.end();
        }

        virtual void remove(std::shared_ptr<FileSystemObject> obj) override {
            auto it = find(rootObjects.begin(), rootObjects.end(), obj);
            if (it != rootObjects.end())
                rootObjects.erase(it);
        }


};

class Explorer {

    std::shared_ptr<Root> root;
    std::vector<std::shared_ptr<FileSystemObject>> clipboard;

    std::shared_ptr<FileSystemObjectsContainer> currentDir;
    std::shared_ptr<Shortcuts> shortcuts;

    public:

        Explorer(std::vector<std::shared_ptr<FileSystemObject> > & rootObjects)
            : root(std::make_shared<Root>(rootObjects)), currentDir(root) {}

        void createFile(const std::string & filename, const std::string & contents) {
            auto newFile = std::make_shared<File>(filename, contents);
            currentDir->add(newFile);
            newFile->setParent(
                std::dynamic_pointer_cast<FileSystemObject>(currentDir)
            );
        }

        void createDirectory(const std::string & name) {
            auto newDir = std::make_shared<Directory>(name);
            currentDir->add(newDir);
            newDir->setParent(
                std::dynamic_pointer_cast<FileSystemObject>(currentDir)
            );

        }

        void cut(const std::string & name) {
            clipboard.push_back(find(name));
        }

        void paste() {
            for (auto fso : this->clipboard)
                moveTo(fso, this->currentDir);

            this->clipboard.clear();    

        }

        void createShortcut(const std::string & name) {
            if (!shortcuts) {
                shortcuts = std::make_shared<Shortcuts>();
                root->add(shortcuts);
            }

            this->shortcuts->add(find(name));
        }

        void navigate(const std::string & name) {

            if (name == "..") {
                std::shared_ptr<FileSystemObject> fso =
                    std::dynamic_pointer_cast<FileSystemObject>(currentDir);
                currentDir =
                    std::dynamic_pointer_cast<FileSystemObjectsContainer>(fso->getParent().lock());
            }

            auto fso = find(name);

            std::shared_ptr<FileSystemObjectsContainer> fsc = std::dynamic_pointer_cast<FileSystemObjectsContainer>(fso);

            if (fsc) {
                currentDir = fsc;
            }
        }

    protected:

        std::shared_ptr<FileSystemObject> find(const std::string & name) {
            auto i = currentDir->begin();
            for (; i != currentDir->end(); i++)
            {
                if (i->get()->getName() == name)
                    return *i;
            }
            
            return std::shared_ptr<FileSystemObject>();
        }

        void moveTo(std::shared_ptr<FileSystemObject> obj, std::shared_ptr<FileSystemObjectsContainer> container) {
            auto previousConteiner = std::dynamic_pointer_cast<FileSystemObjectsContainer>(obj->getParent().lock());
            if (previousConteiner)
                previousConteiner->remove(obj);
            else
                root->remove(obj);

            container->add(obj);

            if (container != this->root)
                obj->setParent(std::dynamic_pointer_cast<FileSystemObject>(container));
        }
};

#endif  // _EXPLORER_H_