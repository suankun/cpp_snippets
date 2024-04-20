// https://www.codewars.com/kata/5772da22b89313a4d50012f7/train/cpp
#include <iostream>
#include <string>
using namespace std;

std::string greet(const std::string& name, const std::string& owner) {
    return name == owner ? "Hello boss" : "Hello guest";
}

int main() {
    string name1 {"Daniel"};
    string name2 {"Daniel"};
    cout << greet(name1, name2) << endl;

    return 0;
}
