// https://www.codewars.com/kata/526233aefd4764272800036f/train/cpp

// Write a function that accepts two square matrices (N x N two dimensional arrays), and return the sum of the two. Both matrices being passed into the function will be of size N x N (square), containing only integers.

// How to sum two matrices:

// Take each cell [n][m] from the first matrix, and add it with the same [n][m] cell from the second matrix. This will be cell [n][m] of the solution matrix. (Except for C where solution matrix will be a 1d pseudo-multidimensional array).

// Visualization:

// |1 2 3|     |2 2 1|     |1+2 2+2 3+1|     |3 4 4|
// |3 2 1|  +  |3 2 3|  =  |3+3 2+2 1+3|  =  |6 4 4|
// |1 1 1|     |1 1 3|     |1+1 1+1 1+3|     |2 2 4|
// Example
// matrixAddition(
//   [ [1, 2, 3],
//     [3, 2, 1],
//     [1, 1, 1] ],
// //      +
//   [ [2, 2, 1],
//     [3, 2, 3],
//     [1, 1, 3] ] )

// // returns:
//   [ [3, 4, 4],
//     [6, 4, 4],
//     [2, 2, 4] ]

#include <iostream>
#include <vector>

std::vector<int> operator+(const std::vector<int>& v1, const std::vector<int>& v2) {
    std::vector<int> result(v1.size());
    for (size_t i = 0; i < v1.size(); i++)
        result[i] = v1[i] + v2[i];

    return result;
}

std::vector<std::vector<int>> matrixAddition(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b) {
    std::vector<std::vector<int>> c;
    for (size_t i = 0; i < a.size(); i++)
        c.push_back(a[i] + b[i]);

    return c;
}
//
std::vector<std::vector<int> > matrixAddition(std::vector<std::vector<int> > a,std::vector<std::vector<int> > b){
    for(int i = 0; i < a.size(); i++)
        for(int j = 0; j < a[i].size(); j++)
        a[i][j] += b[i][j];
    return a;
}
