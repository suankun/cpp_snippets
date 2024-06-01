#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <climits>
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

int sumSumMatrix(vector<vector<int>>& mat, int startRow, int startCol) {

    return  mat[startRow][startCol]  + mat[startRow][startCol+1]  + mat[startRow][startCol+2]  +
            mat[startRow+1][startCol]+ mat[startRow+1][startCol+1]+ mat[startRow+1][startCol+2]+
            mat[startRow+2][startCol]+ mat[startRow+2][startCol+1]+ mat[startRow+2][startCol+2];
}

int main() {
    vector<vector<int>> mat;

    readMatrix(cin, mat);

    int maxSum = INT_MIN;
    int maxSumRow, maxSumCol;

    for (size_t currRow = 0; currRow < mat.size() - 2; currRow++) {
        for (size_t currCol = 0; currCol < mat[currRow].size() - 2; currCol++) {
            int currSum = sumSumMatrix(mat, currRow, currCol);
            if (maxSum < currSum) {
                maxSum = currSum;
                maxSumRow = currRow;
                maxSumCol = currCol;
            }

        }
    }

    cout << "Sum = " << maxSum << endl;
    for (size_t currRow = maxSumRow; currRow < maxSumRow + 3; currRow++) {
        for (size_t currCol = maxSumCol; currCol < maxSumCol + 3; currCol++)
            cout << mat[currRow][currCol] << ' ';
        cout << endl;
    }

    return 0;
}
