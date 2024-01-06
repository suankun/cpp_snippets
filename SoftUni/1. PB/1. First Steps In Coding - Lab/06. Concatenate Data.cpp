#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string f_name, l_name, town;
    int age;
    cin >> f_name;
    cin >> l_name;
    cin >> age;
    cin >> town;

    cout << "You are " << f_name << " " << l_name << ", a " << age << "-years old person from " << town << "." << endl;
    
    return 0;
}
