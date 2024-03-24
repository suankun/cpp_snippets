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
        bool isTop = true;
        for (j = i+1; j < size; j++) {
            if (array[j] >= array[i]) {
                isTop = false;
                break;
            }
        }
        if (isTop) cout << array[i] << ' ';
    }

    return 0;
}
