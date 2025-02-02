#include <iostream>
#include <vector>
#include <string>
#include <map>

// typedef is a keyword used to create type aliases, making code more readable and manageable.
// It allows you to define a new name for an existing data type

// In C++11 and later, using is preferred over typedef because it is more powerful and supports template aliasing.

/// --- typedef --- ///
typedef int Num;
typedef std::vector<double> List;
typedef std::string threeStrings[3];

// Pointer
typedef int* tPtr;

// Sturct
typedef struct {
    int x, y;
} Point;

// Class
class Base {
public:
    int id;
    std::string name;

    Base(int id, std::string name) : id(id), name(name) {}
};

typedef Base ClassAlias;

/// --- using --- ///
using ull = unsigned long long;
using StudentList = std::map<int, std::string>;
using uArr = std::string[3];

// Pointer
using uPtr = unsigned long long*;

// Template
template <typename T>
using Ptr = T*;


int main() {
    // typedef
    Num n = 3;
    List tL = {34.5, 23.1, 36.6};
    threeStrings arr = {"One", "Two", "Three"};
    tPtr tP = &n;
    std::cout << n << ',' << tL[0] << ',' << *tP << ',' << arr[2] << std::endl;

    Point p1 = {3, 5};
    std::cout << "(" <<p1.x << ", " << p1.y << ")" << std::endl;

    ClassAlias b(5, "Edi");
    std::cout << b.id << ". " << b.name << std::endl << std::endl;

    // using
    ull num = 10;
    StudentList uL = {{1, "Name 1"}, {2, "Name 2"}};
    uArr uA = {"five", "six", "seven"};
    uPtr uP = &num;

    // using with templates
    Ptr<int> p = new int(9);

    std::cout << num << ',' << uL[1] << ',' << *uP << ',' << uA[2] << std::endl;
    std::cout << *p << std::endl;

    delete p;

    return 0;
}

