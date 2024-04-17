// https://www.codewars.com/kata/5b68c7029756802aa2000176/train/cpp
#include <iostream>
#include <cmath>
using namespace std;

double EasyLogs(double x, double a, double b){
    return log10(a * b) / log10(x);
}

int main() {
    cout << EasyLogs(10, 2, 3) << endl; // (0.778151250383644, 1e-10)
    cout << EasyLogs(5, 2, 3) << endl; // (1.11328275255938, 1e-10)

    cout << EasyLogs(1000, 2, 3) << endl; // (0.259383750127881, 1e-10)
    cout << EasyLogs(7, 5986839, 906544) << endl; // (15.0687681949324, 1e-10),906544)

    cout << EasyLogs(0.00001, 0.002, 0.01) << endl; // (0.939794000867204, 1e-10)002, 0.01)
    cout << EasyLogs(0.1, 0.002, 0.01) << endl; // (4.69897000433602, 1e-10), 0.01)

    return 0;
}
