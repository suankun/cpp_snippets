#ifndef MAKE_COMPANY_H 
#define MAKE_COMPANY_H 
 
#include "Company.h" 
 
#include <memory>
#include <vector>
#include <string>

std::shared_ptr<Company> makeCompany(const std::vector<std::string> & props) {
    int id = stoi(props[0]);

    std::string name = props[1];

    std::vector<std::pair<char, char> > employees;

    for (size_t curPair = 2; curPair < props.size(); curPair++) {
        employees.push_back(std::pair<char, char>(props[curPair][0], props[curPair][1]));
    }

    std::shared_ptr<Company> result = std::make_shared<Company>(id, name, employees);

    return result;
}


#endif // !MAKE_COMPANY_H