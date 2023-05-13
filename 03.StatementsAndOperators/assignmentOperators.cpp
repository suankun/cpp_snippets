#include <iostream>

using namespace std;

int main() {
    // initialize variables
    int num1 {1};
    int num2 {2};

    // print values
    cout << "Num1 is " << num1 << endl;
    cout << "Num2 is " << num2 << endl;

    // assign new value
    num1 = 5;
    cout << "New value of Num1 is " << num1 << endl;

    // assign variable value to another variable
    num1 = num2;
    cout << "Value of num1 after assigning to it value of num2 is " << num1 << endl;

    // assign value to multiple variables
    num1 = num2 = 1000;
    cout << "Multiple assignment: " << endl;
    cout << "Num1 is " << num1 << endl;
    cout << "Num2 is " << num2 << endl;

    return 0;
}