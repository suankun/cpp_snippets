#include <iostream>
#include <string>
using namespace std;

class Base {
public:
    int ID;
    void print_hello() {cout << "Hello from a Base class!" << endl;}
    Base()
    : ID {5} {};
    ~Base() {};
};

class Derived: public Base {
public:
    string name;
    void print_hello() {cout << "Hello from a Derived class!" << endl;}
    Derived()
    : name{"Edi"} {};
    ~Derived() {};
};

int main() {
    cout << "=== creating Base obj in stack ===" << endl;
    Base one {};
    one.print_hello();
    cout << one.ID << endl;

    cout << "\n=== creating Base obj in heap ===" << endl;
    Base *p_base = new Base;
    p_base->print_hello();
    cout << p_base->ID << endl;
    delete p_base;

    cout << "\n=== creating Derived obj in stack ===" << endl;
    Derived two {};
    two.print_hello();
    cout << two.ID << endl;
    cout << two.name << endl;

    cout << "\n=== creating Derived obj in heap ===" << endl;
    Derived *p_derived = new Derived;
    p_derived->print_hello();
    cout << p_derived->ID << endl;
    cout << p_derived->name << endl;
    delete p_derived;

    return 0;
}
