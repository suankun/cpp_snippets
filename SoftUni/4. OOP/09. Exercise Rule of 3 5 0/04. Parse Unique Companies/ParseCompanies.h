#ifndef PARSE_COMPANIES_H 
#define PARSE_COMPANIES_H 
 
#include "Company.h" 

#include <string>
#include <sstream>
#include <list>
#include <set>
 
Company* parseUniqueCompanies(const std::string & input, int & numCompanies, std::string (*uniqueIdGenerator)(const Company& c)) {

    std::list<Company> companies;
    std::set<std::string> uniqueIds;

    std::istringstream istr(input);

    int id;
    while (istr >> id)
    {
        std::string name;
        istr >> name;

        Company curr(id, name);
        std::string currId = uniqueIdGenerator(curr);

        if (uniqueIds.find(currId) == uniqueIds.end()) {
            companies.push_back(curr);
            uniqueIds.insert(currId);
        }
    }
    
    Company * result = new Company[companies.size()];

    numCompanies = 0;
    for (auto & c : companies)
        result[numCompanies++] = c;

    return result;
}


#endif // !PARSE_COMPANIES_H