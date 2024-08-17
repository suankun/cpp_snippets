// https://www.codewars.com/kata/5a972f30ba1bb5a2590000a0/train/cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<vector<string>> matrixSquareUp(int b)
{
    vector<vector<string>> matrix(b, vector<string>(b));

    for (int i = 0; i < b; i++) {
        for (int j = b - 1; j >= 0; j--) {
            matrix[i][j] = (i + j + 1 < b) ? "x" : to_string(b - j);
        }
    }

    return matrix;
}

int main() {
    int b = 3;
    vector<vector<string>> result = matrixSquareUp(b);

    for (const auto& row : result) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
