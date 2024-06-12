#include <iostream>
#include <string>
#include <sstream>

using namespace std;

const size_t MAX_COL_SIZE = 10;

int ** readMatrix(istream & istr, int & rows, int & cols) {
    istr >> rows;
    istr.ignore();

    int ** data = new int *[rows];

    for (size_t curRow = 0; curRow < rows; curRow++) {
        string buf;
        getline(istr, buf);

        istringstream rowStream(buf);

        data[curRow] = new int[MAX_COL_SIZE];

        cols = 0;
        while (rowStream >> data[curRow][cols++]);
    }

    return data;
}

bool compareMarices(int ** mat1, int m1r, int m1c, int ** mat2, int m2r, int m2c) {
    if (m1r != m2r || m1c != m2c)
        return false;

    for (size_t curRow = 0; curRow < m1r; curRow++) {
        for (size_t curCol = 0; curCol < m1c; curCol++)
            if (mat1[curRow][curCol] != mat2[curRow][curCol])
                return false;
    }

    return true;
}

void deleteMatrix(int ** mat, int row) {
    for (size_t cur = 0; cur < row; cur++)
        delete [] mat[cur];
    delete [] mat;
}

int main()
{
    int m1r, m1c;
    int ** mat1;
    mat1 = readMatrix(cin, m1r, m1c);

    int m2r, m2c;
    int ** mat2;
    mat2 = readMatrix(cin, m2r, m2c);

    cout << (compareMarices(mat1, m1r, m1c, mat2, m2r, m2c) ? "equal" : "not equal") << endl;

    deleteMatrix(mat1, m1r);
    deleteMatrix(mat2, m2r);
    
    return 0;
}
