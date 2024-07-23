#ifndef _TRY_PARSE_
#define _TRY_PARSE_

#include <sstream>

bool tryParse(const std::string & str, int & a) {
    std::istringstream istr(str);

    return bool(istr >> a);
}


#endif // _TRY_PARSE_