#include <iostream>

using namespace std;

int main() {
    bool equal {false};
    bool not_equal {false};
    int num1 {}, num2 {};

    cout << "Enter two values: ";
    cin >> num1 >> num2;

    cout << boolalpha;
    equal = (num1 == num2);
    not_equal = (num1 != num2);

    cout << "Test equal: " << equal << endl;
    cout << "Test not equal: " << not_equal << endl;

    return 0;
}