#include <iostream>
using namespace std;

void readNums(int arr[], int size) {
    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }
}

void printArr(int arr[], int size) {
    for (int i=size-1; i>=0; i--) {
        cout << arr[i] << ' ';
    }
}

int main() {
    int n;
    cin >> n;

    const int SIZE = n;
    int arr[SIZE];

    readNums(arr, SIZE);
    printArr(arr, SIZE);

    return 0;
}
