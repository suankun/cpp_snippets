#include <iostream>
#include <string>
#include <vector>
using namespace std;

void pass_by_ref_num(int &num) {
    num = 12;
}

void pass_by_ref_string(string &s) {
    s = "Edi";
}

void print_vector(vector <string> &v) {
    for (auto name: v)
        cout << name << " ";
    cout << endl;
}

void pass_by_ref_vector(vector <string> &v) {
    v.clear();
}

int main() {
    int num {5};
    cout << "Before passed number by reference: " << num << endl;
    pass_by_ref_num(num);
    cout << "After passed number by reference: " << num << endl;

    string name {"Edmont"};
    cout << "\nBefore passed string by reference: " << name << endl;
    pass_by_ref_string(name);
    cout << "After passed string by reference: " << name << endl;

    vector <string> stooges {"Larry", "Moe", "Curly"};
    cout << "\nBefore passed vector by reference: ";
    print_vector(stooges);
    pass_by_ref_vector(stooges);
    cout << "After passed vector by reference: ";
    print_vector(stooges);

    return 0;
}