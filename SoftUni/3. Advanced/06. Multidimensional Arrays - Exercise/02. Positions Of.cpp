#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

void readMatrices(istream & in, vector< vector<int> > & mat) {
    int rows, cols;
    in >> rows >> cols;

    mat = vector < vector<int> >(rows, vector<int>(cols, 0));
    // mat.resize(rows, vector<int>(cols, 0));

    for (int currRow = 0; currRow < rows; currRow++)
        for (int currCol = 0; currCol < cols; currCol++)
            in >> mat[currRow][currCol];
}


int main() {

    vector< vector<int> > mat;

    readMatrices(cin, mat);

    int search;
    cin >> search;

    bool bFound = false;
    for (int currRow = 0; currRow < mat.size(); currRow++)
        for (int currCol = 0; currCol < mat[0].size(); currCol++)
            if (mat[currRow][currCol] == search) {
                bFound = true;
                cout << currRow << ' ' << currCol << endl;
            }

    if (!bFound)
        cout << "not found" << endl;

    return 0;
}
