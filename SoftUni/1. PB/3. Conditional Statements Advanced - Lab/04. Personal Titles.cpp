#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    double age;
    char sex;
    cin >> age;
    cin >> sex;

    if (sex=='m') {
        if (age>=16) cout << "Mr." << endl;
        else cout << "Master" << endl;
    }
    else if (sex=='f') {
        if (age>=16) cout << "Ms." << endl;
        else cout << "Miss" << endl;
    }

    return 0;
}
