#include <iostream>
using namespace std;

const int MAX_ELEMENTS = 99;

void readArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int main() {
    int size;
    cin >> size;

    int numArr1[MAX_ELEMENTS];
    int numArr2[MAX_ELEMENTS];

    readArr(numArr1, size);
    readArr(numArr2, size);

    int index = 0, flag = 1, sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numArr1[i];
        if (numArr1[i] != numArr2[i]) {
            index = i;
            flag = 0;
            break;
        }
    }
    
    if (flag) {
        cout << "Arrays are identical. Sum: " << sum << endl;
    }
    else {
        cout << "Arrays are not identical. Found difference at " << index << " index." << endl;
    }

    return 0;
}
