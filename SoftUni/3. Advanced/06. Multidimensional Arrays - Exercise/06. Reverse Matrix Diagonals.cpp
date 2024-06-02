#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

void readMatrix(istream & in, vector< vector<int> > & mat) {
    int rows, cols;
    in >> rows >> cols;

    mat = vector < vector<int> >(rows, vector<int>(cols, 0));
    // mat.resize(rows, vector<int>(cols, 0));

    for (int currRow = 0; currRow < rows; currRow++)
        for (int currCol = 0; currCol < cols; currCol++)
            in >> mat[currRow][currCol];
}

void printReverseDiagonal(vector<vector<int>>& mat, int row, int col) {
    for (; row >= 0 && col < mat[0].size(); row--, col++)
        cout << mat[row][col] << ' ';
    cout << endl;
}

int main() {
    vector<vector<int>> mat;

    readMatrix(cin, mat);

    for (int c = mat[0].size() - 1; c >= 0; c--)
        printReverseDiagonal(mat, mat.size() - 1, c);

    for (int r = mat.size() - 2; r >= 0; r--)
        printReverseDiagonal(mat, r, 0);

    return 0;
}
