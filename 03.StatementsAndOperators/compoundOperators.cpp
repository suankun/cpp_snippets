#include <iostream>
using namespace std;

int main() {
    int num {1};
    int result {};

    result = num += 8; // num = 9
    cout << "Addition: " << result << endl;
    result = num -= 3; // num = 6
    cout << "Sub: " << result << endl;
    result = num /= 3; // num = 2
    cout << "Division: " << result << endl;
    result = num *= 3; // num = 6
    cout << "Multiply: " << result << endl;

    return 0;
}