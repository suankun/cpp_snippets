#include <iostream>
using namespace std;

int evenSum(int n) {
    int sum = 0;
    while (n) {
        int lastDigit = n%10;
        if (lastDigit%2 == 0) {
            sum += n%10;
        }
        n /= 10;
    }
    return sum;
}

int oddSum(int n) {
    int sum = 0;
    while (n) {
        int lastDigit = n%10;
        if (lastDigit%2 != 0) {
            sum += n%10;
        }
        n /= 10;
    }
    return sum;
}

void printMultyplySum(int even, int odd) {
    cout << even * odd << endl;
}

int main() {
    int num;
    cin >> num;

    int even = evenSum(num);    
    int odd  = oddSum(num);

    printMultyplySum(even, odd);

    return 0;
}
