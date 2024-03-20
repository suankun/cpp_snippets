#include <iostream>
using namespace std;

int readNum();
void readArr(string* arr, int size);
void reverseArr(string* arr, int size);
void printResult(string* arr, int size);


int main() {
    int num = readNum();
    const int SIZE = num;
    string arr[SIZE];
    readArr(arr, SIZE);

    reverseArr(arr, SIZE);
    printResult(arr, SIZE);

    return 0;
}

int readNum() {
    int n;
    cin >> n;
    return n;
}

void readArr(string* arr, int size) {
    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }
}

void reverseArr(string* arr, int size) {
    for (int i=0; i<size/2; i++) {
        string temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}

void printResult(string* arr, int size) {
    for (int i=0; i<size; i++) {
        cout << arr[i] << ' ';
    }
}
