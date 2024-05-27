#include <iostream>
using namespace std;

int main() {
    constexpr int MAX_SIZE = 100;
    int array[MAX_SIZE];

    int size;
    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int beginIndex = -1, maxCount = 0;

    for (int i = 0; i < size; i++) {
        int currentSeqNumber = array[i], currentCount = 0;
        while (currentSeqNumber == array[i])
        {
            currentCount++;
            i++;
        }
        i--;
        if (maxCount <= currentCount) {
            beginIndex = i - currentCount+1;
            maxCount = currentCount;
        }
    }

    for (int i = beginIndex; i < beginIndex+maxCount; i++) {
        cout << array[i] << ' ';
    }

    return 0;
}
