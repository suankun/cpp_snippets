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

    int magicSum;
    cin >> magicSum;

    for (i = 0; i < size; i++) {
        for (j = i+1; j < size; j++) {
            if (array[i] + array[j] == magicSum) cout << array[i] << ' ' << array[j] << endl;
        }
    }

    return 0;
}
