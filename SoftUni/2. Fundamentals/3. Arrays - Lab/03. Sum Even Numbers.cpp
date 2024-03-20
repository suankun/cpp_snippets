#include <iostream>
using namespace std;

void readArray(int *arr, int size);
int sumEvenNumbers(int *arr, int size);

int main() {
    int n;
    cin >> n;

    const int SIZE = n;
    int arr[SIZE];

    readArray(arr, SIZE);
    int sum = sumEvenNumbers(arr, SIZE);

    cout << sum << endl;

    return 0;
}

void readArray(int *arr, int size) {
    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }
}

int sumEvenNumbers(int *arr, int size) {
    int sum = 0;
    for (int i=0; i<size; i++) {
        if (arr[i]%2==0) {
            sum+=arr[i];
        }
    }
    return sum;
}
