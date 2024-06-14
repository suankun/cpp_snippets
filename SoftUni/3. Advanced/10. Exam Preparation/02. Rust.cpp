#include <iostream>
#include <string>

using namespace std;

const size_t DIMENSION = 10;

const char RUST = '!';
const char ALPAKA = '#';
const char EMPTY = '.';
const char TEMP_RUST = '?';

void printMatrix(const char matrix[DIMENSION][DIMENSION+1]) {
    for (size_t row = 0; row < DIMENSION; row++)
        cout << matrix[row] << endl;
}

void setMatrixCell(int row, int col, char matrix[DIMENSION][DIMENSION+1], char symbol) {
    if (row < 0 || col < 0 || row >= DIMENSION || col >= DIMENSION)
        return;

    matrix[row][col] = symbol;
}

void setRust(int row, int col, char matrix[DIMENSION][DIMENSION+1], char symbol) {
    if (row < 0 || col < 0 || row >= DIMENSION || col >= DIMENSION)
        return;

    if (matrix[row][col] == EMPTY)
        matrix[row][col] = symbol;
}


void putTempRust(char matrix[DIMENSION][DIMENSION+1]) {
    for (int row = 0; row < DIMENSION; row++)
        for (int col = 0; col < DIMENSION; col++)
            if (matrix[row][col] == RUST) {
                setRust(row-1, col, matrix, TEMP_RUST);
                setRust(row+1, col, matrix, TEMP_RUST);
                setRust(row, col-1, matrix, TEMP_RUST);
                setRust(row, col+1, matrix, TEMP_RUST);
            }

}

void fixTempRust(char matrix[DIMENSION][DIMENSION+1]) {
    for (int row = 0; row < DIMENSION; row++)
        for (int col = 0; col < DIMENSION; col++)
            if (matrix[row][col] == TEMP_RUST)
                matrix[row][col] = RUST;

}

int main()
{
    char matrix[DIMENSION][DIMENSION+1] = {0};

    for (size_t row = 0; row < DIMENSION; row++)
        for (size_t col = 0; col < DIMENSION; col++)
            cin >> matrix[row][col];

    size_t ticks;
    cin >> ticks;

    for (; ticks; ticks--) {
        putTempRust(matrix);
        fixTempRust(matrix);
    }

    printMatrix(matrix);
    
    return 0;
}
