#include <iostream>

using namespace std;

int add (int a, int b) { return a + b; }
int sub (int a, int b) { return a - b; }
int mul (int a, int b) { return a * b; }
int divide (int a, int b) { return b == 0 ? 0 : a / b; }

int apply(int a, int b, int (*mathOp)(int num1, int num2)) {
    return mathOp(a, b);
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << apply(a, b, add) << endl;
    cout << apply(a, b, sub) << endl;
    cout << apply(a, b, mul) << endl;
    cout << apply(a, b, divide) << endl;

    return 0;
}