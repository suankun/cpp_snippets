#include <iostream>
using namespace std;

int main() {
    // Reads an integer number N
    int N;
    cin >> N;

    // Check whether a given number is strong
    int sum = 0, num = N;
    while (num > 0) {
        int temp = num % 10;
        int temp_sum = 1;
        for (int i = 1; i <= temp; i++) {
            temp_sum *= i;
        }
        sum += temp_sum;
        num /= 10;
    }

    // Print the result
    cout << (sum == N ? "yes" : "no") << endl;

    return 0;
}
