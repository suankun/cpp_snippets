#include <iostream>

using namespace std;

int main() {
    int total {};
    int num1 {}, num2 {}, num3 {};

    const int count {3};

    cout << "Enter 3 numbers separated with spaces: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double average {};
    average = static_cast<double>(total)/count; // cast of int to double
    cout << "Average is " << average << endl;

    return 0;
}