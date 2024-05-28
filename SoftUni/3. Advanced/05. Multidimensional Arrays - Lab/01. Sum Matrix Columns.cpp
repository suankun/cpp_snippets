#include <iostream>
#include <array>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int arr[rows][cols];

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cin >> arr[r][c];
        }
    }

    // for (int r = 0; r < rows; r++) {
    //     for (int c = 0; c < cols; c++) {
    //         cout << arr[r][c] << ' ';
    //     }
    //     cout << endl;
    // }
    
    for (int c = 0; c < cols; c++) {
        int tempSum = 0;
        for (int r = 0; r < rows; r++) {
            tempSum += arr[r][c];
        }
        cout << tempSum << endl;
    }

    return 0;
}
