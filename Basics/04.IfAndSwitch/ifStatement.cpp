#include <iostream>
using namespace std;

int main() {
    int num {};

    cout << "Enter an integer: ";
    cin >> num;

    if (num >= 10) {
        cout << "Statement 1, number is equal or more than 10!" << endl;
    }
    if (num <= 100) {
        cout << "Statement 2, number is equal or less than 100!" << endl;
    }
    if (num >= 10 && num <= 100) {
        cout << "Statement 3, number is equal or between 10 and 100!" << endl;
    }
    if (num <= 10 || num >= 100) {
        cout << "Statement 4, number ouside of range 10 and 100!" << endl;
    }

    return 0;
}