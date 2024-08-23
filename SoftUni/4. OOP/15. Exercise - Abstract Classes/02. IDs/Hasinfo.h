#ifndef _HAS_INFO_H_
#define _HAS_INFO_H_

#include <string>

struct HasInfo {

    virtual std::string getInfo() const = 0;

    virtual ~HasInfo() = default;

};


#endif  // _HAS_INFO_H_