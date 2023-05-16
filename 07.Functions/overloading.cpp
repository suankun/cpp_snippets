#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print(int num) {
    cout << "Print from int: " << num << endl;
}

void print(double num) {
    cout << "Print from double: " << num << endl;
}

void print(string s) {
    cout << "Pirnt from string: " << s << endl;
}

void print(vector <string> s) {
    cout << "Print from vector: ";
    for (auto name: s) {
        cout << name + " ";
    }
    cout << endl;
}

int main() {
    print(100);
    print(10.34);

    print("Edi"); // c-style string
    string name {"Edmont"};
    print(name);

    vector <string> list_of_names {"Edi", "Kevi"};
    print(list_of_names);

    return 0;
}