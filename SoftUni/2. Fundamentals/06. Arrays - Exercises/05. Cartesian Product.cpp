#include <iostream>
using namespace std;

int main() {
    constexpr int MAX_SIZE = 99;
    int array[MAX_SIZE];

    int size;
    cin >> size;

    int i, j;
    for (i = 0; i < size; i++) {
        cin >> array[i];
    }

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            cout << array[i] * array[j] << ' ';
        }
    }

    return 0;
}
