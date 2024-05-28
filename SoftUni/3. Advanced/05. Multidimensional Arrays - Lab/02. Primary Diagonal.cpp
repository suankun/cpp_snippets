#include <iostream>
#include <array>
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

    int sum = 0;
    // for (int rows = 0; rows < n; rows++) {
    //     for (int cols = 0; cols < n; cols++) {
    //         if (rows == cols)
    //             sum += matrix[rows][cols];
    //     }
    // }

    for (int currIndex = 0; currIndex < n; currIndex++)
        sum += matrix[currIndex][currIndex];

    cout << sum << endl;

    return 0;
}
