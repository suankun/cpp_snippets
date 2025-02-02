#include <iostream>
#include <string>
#include <vector>

using namespace std;


// 'this' is very useful in any method where parameters match the fields

class Person {
public:

    string name; int age = 0; double height = 0;    

    // Correct way (for using constructor body) - explicitly accessing the fields through the "this" pointer.
    // If not, the compiler see the last known variable. For example, 'name' from Person parameters will
    // take the same value. As a result the object will be constructed with default values from declaration members list.
    // Person(string name, int age, double height) {
    //     name = name;
    //     age = age;
    //     height = height;
    // }
    Person(string name, int age, double height) {
        this->name = name;
        this->age = age;
        this->height = height;
    }
};

void print(Person p) {
    cout << "Name: " << p.name << endl
         << "Age: " << p.age << endl
         << "Height: " << p.height << endl;
}

int main() {
    Person peter {"Peter Brown", 31, 1.69};
    Person ivan = Person("Ivan Ivanov", 12, 1.52);
    vector<Person> people;
    people.push_back(Person("Ana Ivanova", 43, 1.60));

    print(peter);

    return 0;
}