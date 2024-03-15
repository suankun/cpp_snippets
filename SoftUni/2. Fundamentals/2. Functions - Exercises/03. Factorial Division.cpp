#include <iostream>
using namespace std;

long long calcFactorial(int n) {
    long long result = 1;
    for (int i=2; i<=n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int a, b;
    cin >> a >> b;

    double result = 1.0 * calcFactorial(a)/calcFactorial(b);

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << result << endl;

    return 0;
}
