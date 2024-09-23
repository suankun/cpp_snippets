// https://www.codewars.com/kata/60a3a5fa042b6000454b4d85/train/cpp
#include <iostream>
using namespace std;

int squaredSpiral(int x, int y)
{
    int point = 0;
    int i = 0, j = 0;

    if (x == 0 && y == 0)
        return point;

    int iter = 0;
    while(true) {
        iter++;
        for (int idxI = 0; idxI < iter; idxI++) {
            iter % 2 != 0 ? i++ : i--;
            point++;
            if (i == x && j == y)
                return point;
        }

        for (int idxJ = 0; idxJ < iter; idxJ++) {
            iter % 2 != 0 ? j++ : j--;
            point++;
            if (i == x && j == y)
                return point;
        }
    }

    return 0;
}

int main() {
    cout << squaredSpiral(0, 0) << endl;  //  0
    cout << squaredSpiral(1, 1) << endl;  //  2
    cout << squaredSpiral(2, 0) << endl;  // 10
    cout << squaredSpiral(2, 2) << endl;  // 12
    cout << squaredSpiral(3, 3) << endl;  // 30

    return 0;
}
