#include <iostream>
#include <array>
#include <string>
#include <sstream>
using namespace std;

void readMatrices(istream & in, array< array<int, 10>, 10 > & mat, int & rows, int & cols) {
    in >> rows; in.ignore();

    for (int currRow = 0; currRow < rows; currRow++) {
        string buff;
        getline(in, buff);

        istringstream istr(buff);
        cols = 0;
        int curValue;
        while (istr >> curValue)
        {
            mat[currRow][cols] = curValue;
            cols++;
        }
        
    }
}

bool compareMatrices(
    array< array<int, 10>, 10 > & mat1, int & rows1, int & cols1,
    array< array<int, 10>, 10 > & mat2, int & rows2, int & cols2) {
    
    if (rows1 != rows2 || cols1 != cols2)
        return false;

    for (int currRow = 0; currRow < rows1; currRow++)
        for (int currCol = 0; currCol < cols1; currCol++)
            if (mat1[currRow][currCol] != mat2[currRow][currCol])
                return false;

    return true;
}

int main() {
    array< array<int, 10>, 10 > mat1, mat2;
    int m1r, m1c, m2r, m2c;

    readMatrices(cin, mat1, m1r, m1c);
    readMatrices(cin, mat2, m2r, m2c);

    cout << (compareMatrices(mat1, m1r, m1c, mat2, m2r, m2c) ? "equal" : "not equal") << endl;

    return 0;
}
