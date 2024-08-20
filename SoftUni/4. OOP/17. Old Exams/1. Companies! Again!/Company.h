#ifndef _COMPANY_H_
#define _COMPANY_H_

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <utility>
#include <memory>

using namespace std;

class Company {
    public:

        int id;

    private:

        std::string name;
        std::vector<std::pair<char, char> > employees;

    public:

        Company();
        Company(int id, std::string name, std::vector<std::pair<char, char> > employees);

        virtual ~Company() = default;

        int getId() const;
        std::string getName() const;
        std::vector<std::pair<char, char> > getEmployees() const;
        std::string getInfo() const;

        friend std::ostream& operator<<(std::ostream& stream, const Company& c);
        friend std::istream& operator>>(std::istream& stream, Company& c);

        virtual bool isSuper(void) const { return false; }


};



#endif  // _COMPANY_H_