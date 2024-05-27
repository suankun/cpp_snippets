#include <iostream>
using namespace std;

int main() {
    double n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    // if there is 0, the product will be 0, so the result will be +
    if (n1 == 0 || n2 == 0 || n3 == 0) {
        cout << '+' << endl;
    }
    else {
        // counting negatives
        int negativeNumbersCount = 0;
        if (n1 < 0) negativeNumbersCount++;
        if (n2 < 0) negativeNumbersCount++;
        if (n3 < 0) negativeNumbersCount++;
        if (negativeNumbersCount % 2 == 0) {
            cout << '+' << endl;
        }
        else {
            cout << '-' << endl;
        }
    }

    return 0;
}
