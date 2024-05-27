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

    int mapArray[10] = {};
    for (i = 0; i < size; i++) {
        mapArray[array[i]]++;
    }

    int maxCount = 1;
    for (i = 0; i < 10; i++) {
        if (maxCount < mapArray[i]) {
            maxCount = mapArray[i];
        }
    }

    for (i = 0; i < 10; i++) {
        if (maxCount == mapArray[i]) {
            cout << i << ' ';
        }
    }

    return 0;
}
