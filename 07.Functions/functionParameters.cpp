#include <iostream>
#include <string>
#include <vector>
using namespace std;

// pass by value int
void pass_by_value_int (int a);
// pass by value strint
void pass_string(string str);
// pass by value vector
void print_vector(vector <string> list);

int main() {
    int num {100};
    string name {"Edi"};
    vector <string> list_of_names {"Edi", "Kevi", "Araxi"};
    
    cout << "Actual value: " << num << endl;
    pass_by_value_int(num);
    cout << "After change value in void function: " << num << endl;

    cout << "From main before passing to pass_string: " << name << endl;
    pass_string(name);
    cout << "From main after passing to pass_string: " << name << endl;

    print_vector(list_of_names);

    return 0;
}

void pass_by_value_int (int a) {
    a = 3;
    cout << "Changed value from void funciton: " << a << endl;
}

void pass_string(string str) {
    str = "Kevi";
    cout << "From pass_string: " << str << endl;
}

void print_vector(vector <string> list) {
    for (auto name: list) {
        cout << name << " ";
    }
    cout << endl;
}
