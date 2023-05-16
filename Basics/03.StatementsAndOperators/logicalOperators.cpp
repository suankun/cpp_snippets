#include <iostream>
using namespace std;

int main() {
    int num {};
    cout << boolalpha;

    cout << "Enter two integers separated by space: ";
    cin >> num;

    cout << "Is the number is between 10 and 20: " <<
    (num >= 10 && num <= 20) << endl;

    cout << "Is the number outside of range 10 and 20: " <<
    (num < 10 || num > 20) << endl;

    return 0;
}