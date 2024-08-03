#include <iostream>
#include <list>

using namespace std;

class Company {
    string name;
    
    public:

        Company(string name) : name(name) {}

        const string getName() const { return this->name; }
};

void removeInvalid(char firstChar, list<Company*> & companies) {
    list<Company*>::iterator it = companies.begin();

    while (it != companies.end()) {
        if ((*it)->getName()[0] == firstChar) {
            delete *it;
            it = companies.erase(it);
        }
        else
            it++;
    }
}

int main() {
    list<Company*> companies;

    companies.push_back(new Company("One"));
    companies.push_back(new Company("Two"));
    companies.push_back(new Company("Three"));

    char firstChar;
    cin >> firstChar;

    removeInvalid(firstChar, companies);

    for (Company* com : companies) {
        cout << com->getName() << endl;
        delete com;
    }

    return 0;
}
