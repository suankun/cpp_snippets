#include <iostream>
#include <string>

// These user-defined data types are called "classes". Act as a template for objects of the same type
// Instances of such user-defined data types are called "objects". The instance is the object itself,
// which is created at runtime

class Person {

    class Body {
        public:
            double height;
            double weight;
    };

    public:
        std::string name;
        int age;

        Body body;
};

void print(Person person) {
    std::cout << "Age: " << person.age << ',' << person.name << ',' << person.body.height << ',' << person.body.weight << std::endl;
}

void makePersonOlder(Person & person, int years) {
    person.age += years;
}

int main() {
    Person p;
    p.age = 30;
    p.name = "Edi";
    p.body.height = 170;
    p.body.weight = 80;

    print(p);
    makePersonOlder(p, 3);
    print(p);

    Person * personPtr = new Person();
    personPtr->age = 30;
    personPtr->name = "Second Person";
    personPtr->body.height = 170;
    personPtr->body.weight = 80;

    print(*personPtr);
    makePersonOlder(*personPtr, 3);
    print(*personPtr);
    delete personPtr;

    return 0;
}