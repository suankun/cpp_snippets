#ifndef _COMPANY_H_
#define _COMPANY_H_

#include "Hasid.h"
#include "Hasinfo.h"

#include <sstream>
#include <vector>

class Company : public HasId, public HasInfo {

    int id;
    std::string name;
    std::vector<std::pair<char, char> > employees;

    public:
        Company();

        Company(int id, std::string name, std::vector<std::pair<char, char> > employees);

        virtual int getId() const override;

        std::string getName() const;

        std::vector<std::pair<char, char> > getEmployees() const;

        virtual std::string getInfo() const override;

        friend std::ostream& operator<<(std::ostream& stream, const Company& c);

        friend std::istream& operator>>(std::istream& stream, Company& c);

};

#endif  // _COMPANY_H_