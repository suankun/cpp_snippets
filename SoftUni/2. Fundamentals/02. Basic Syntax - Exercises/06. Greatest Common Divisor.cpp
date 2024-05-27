#include <iostream>
using namespace std;

int main() {
    // User input
    int num1, num2;
    cin >> num1 >> num2;

    // Find the GCD (Greatest Common Divisor)
    int gcd;
    num1<num2 ? gcd=num1 : gcd=num2;
    for (int i=gcd; i>0; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
            break;
        }
    }

    // Print the GCD (Greatest Common Divisor)
    cout << gcd << endl;

    return 0;
}
