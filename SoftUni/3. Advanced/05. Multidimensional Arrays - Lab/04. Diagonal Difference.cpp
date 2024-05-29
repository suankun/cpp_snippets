#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int matrix[n][n];

    for (int rows = 0; rows < n; rows++) {
        for (int cols = 0; cols < n; cols++) {
            cin >> matrix[rows][cols];
        }
    }

    int sumPrimaryDiag = 0, sumSecondDiag = 0;
    // for (int currIndex = 0; currIndex < n; currIndex++) {
    //     sumPrimaryDiag += matrix[currIndex][currIndex];
    //     sumSecondDiag += matrix[currIndex][n - 1 - currIndex];
    // }

    for (int rows = 0; rows < n; rows++) {
        for (int cols = 0; cols < n; cols++) {
            if (rows == cols)
                sumPrimaryDiag += matrix[rows][cols];
            if (rows + cols == n - 1)
                sumSecondDiag += matrix[rows][cols];
        }
    }

    cout << abs(sumPrimaryDiag - sumSecondDiag) << endl;

    return 0;
}
