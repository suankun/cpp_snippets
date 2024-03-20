#include <iostream>
using namespace std;

const int MAX_ELEMENTS = 99;

int main() {
    int size;
    cin >> size;

    int arr[MAX_ELEMENTS];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int sumEven = 0, sumOdd = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        }
        else {
            sumOdd += arr[i];
        }
    }

    int diff = sumEven - sumOdd;

    cout << diff << endl;

    return 0;
}
