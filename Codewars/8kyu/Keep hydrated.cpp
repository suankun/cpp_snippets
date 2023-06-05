#include <iostream>

using namespace std;

int litres(double time) {
    return time * 0.5; // automatic casting to int
}

int main() {
    // double time {3};
    double time {6.7};
    double result = litres(time);
    cout << "Print result: " << result << endl;

    return 0;
}
