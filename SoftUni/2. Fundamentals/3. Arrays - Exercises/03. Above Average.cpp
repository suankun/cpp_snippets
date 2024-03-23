#include <iostream>
using namespace std;

int main() {
    constexpr int MAX_SIZE = 99;
    int array[MAX_SIZE];

    int size;
    cin >> size;

    int i;
    for (i = 0; i < size; i++) {
        cin >> array[i];
    }

    int avg = 0;
    for (i = 0; i < size; i++) {
        avg += array[i];
    }
    avg /= size;

    for (i = 0; i < size; i++) {
        if (array[i] >= avg) {
            cout << array[i] << ' ';
        }
    }

    return 0;
}
