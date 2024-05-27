#include <iostream>
using namespace std;

void printArray(const int array[], const int& size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << ' ';
    }
    cout << endl;
}

int main() {
    constexpr int MAX_SIZE = 100;
    int array1[MAX_SIZE];
    int array2[MAX_SIZE];

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int firstNumber, secondNumber;
        cin >> firstNumber >> secondNumber;
        if (i % 2 == 0) {
            array1[i] = firstNumber;
            array2[i] = secondNumber;
        }
        else {
            array2[i] = firstNumber;
            array1[i] = secondNumber;
        }
    }

    printArray(array1, N);
    printArray(array2, N);

    return 0;
}
