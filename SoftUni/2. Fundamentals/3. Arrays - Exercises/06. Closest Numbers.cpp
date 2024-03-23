#include <iostream>
#include <limits.h>
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

    int minDiff = INT_MAX;
    if (size == 1) {
        minDiff = 0;
    }
    else {
        for (i = 0; i < size-1; i++) {
            for (j = i+1; j < size; j++) {
                if (minDiff > abs(array[i] - array[j])) {
                    minDiff = abs(array[i] - array[j]);
                }
            }
        }
    }

    cout << minDiff << endl;

    return 0;
}
