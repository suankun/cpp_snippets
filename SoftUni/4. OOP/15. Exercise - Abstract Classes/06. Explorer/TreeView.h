#ifndef _TREE_VIEW_H_
#define _TREE_VIEW_H_

#include <string>
#include <vector>
#include <sstream>
#include <memory>
#include <algorithm>

#include "FileSystemObject.h"
#include "FileSystemObjectsContainer.h"

typedef std::vector<std::shared_ptr<FileSystemObject>> FSOContents;

std::string getTreeView(FSOContents::const_iterator begin, FSOContents::const_iterator end, const std::string & indent) {

    std::vector<std::shared_ptr<FileSystemObject> > contents;
	for (auto it = begin; it != end; it++) {
        contents.push_back(*it);
	}

	std::sort(contents.begin(), contents.end(), [](const std::shared_ptr<FileSystemObject> a, const std::shared_ptr<FileSystemObject> b) {
		return a->getName() < b->getName();
	});

    std::ostringstream ostr;

    for (auto c = contents.begin(); c != contents.end(); c++) {
        const FileSystemObject * fso = c->get();
        ostr << indent << fso->getName() << std::endl;
        const FileSystemObjectsContainer * fsAsConteiner = dynamic_cast<const FileSystemObjectsContainer *>(fso);

        if (fsAsConteiner != nullptr) {
            ostr << getTreeView(fsAsConteiner->begin(), fsAsConteiner->end(), indent + "--->");
        }
    }

    return ostr.str();
}

std::string getTreeView(const FSOContents & rootObject) {


    return getTreeView(rootObject.begin(), rootObject.end(), "");
}


#endif  // _TREE_VIEW_H_