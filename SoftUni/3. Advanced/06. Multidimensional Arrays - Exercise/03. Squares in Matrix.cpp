#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

void readMatrices(istream & in, vector< vector<char> > & mat) {
    int rows, cols;
    in >> rows >> cols;

    // mat = vector < vector<char> >(rows, vector<char>(cols, 0));
    mat.resize(rows, vector<char>(cols, '\0'));

    for (int currRow = 0; currRow < rows; currRow++)
        for (int currCol = 0; currCol < cols; currCol++)
            in >> mat[currRow][currCol];
}

bool detect2x2(vector< vector<char> >& mat, size_t row, size_t col) {
    char c = mat[row][col];

    return  c == mat[row][col+1] &&
            c == mat[row+1][col] &&
            c == mat[row+1][col+1];
}


int main() {

    vector< vector<char> > mat;

    readMatrices(cin, mat);

    int count = 0;
    for (size_t row = 0; row < mat.size() - 1; row++)
        for (size_t col = 0; col < mat[row].size() - 1; col++)
            if (detect2x2(mat, row, col))
                count++;

    cout << count << endl;    

    return 0;
}
