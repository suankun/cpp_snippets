#include <iostream>

int main() {
    const int rows = 4;
    const int cols = 3;
    int matrix[rows][cols] =
    {
        {11, 12, 13},
        {21, 22, 23},
        {31, 32, 33},
        {41, 42, 43}
    };

    matrix[1][3] = 0;

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            std::cout << matrix[row][col] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
