#include <iostream>
using namespace std;

int main() {
    // int num {};
    // cout << "Enter an integer: ";
    // cin >> num;

    // if (num % 2 == 0) {
    //     cout << "The number is even!" << endl;
    // } else {
    //     cout << "The number is odd!" << endl;
    // }

    // cout << "The number is " << ((num % 2 == 0) ? "even!" : "odd!") << endl;

    /////////////////////////////////////////
    int num1 {}, num2 {}; // determine which one is higher
    cout << "Enter two numbers separated by space: ";
    cin >> num1 >> num2;

    if (num1 == num2) {
        cout << "The numbers are the same!";
    } else {
        cout << ((num1 > num2) ? num1 : num2) << " is higher!" << endl;
    }

    return 0;
}