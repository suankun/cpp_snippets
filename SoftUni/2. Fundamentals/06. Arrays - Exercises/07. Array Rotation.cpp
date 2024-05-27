#include <iostream>
using namespace std;

void rotateLeft(int array[], int size) {
    for (int i = 0; i < size-1; i++) {
        array[i] = array[i+1];
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << ' ';
    }
    cout << endl;
}

int main() {
    constexpr int MAX_SIZE = 99;
    int array[MAX_SIZE];

    int size;
    cin >> size;

    int i;
    for (i = 0; i < size; i++) {
        cin >> array[i];
    }

    int rotationCnt;
    cin >> rotationCnt;

    for (i = 0; i < rotationCnt; i++) {
        int temp = array[0];
        rotateLeft(array, size);
        array[size-1] = temp;
    }

    printArray(array, size);

    return 0;
}
