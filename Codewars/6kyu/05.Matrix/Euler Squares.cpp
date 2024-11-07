// https://www.codewars.com/kata/6470e15f4f0b26052c6151cd/train/cpp

// Write a function that creates a Euler square for any odd positive integer n. Your function will be tested for odd n < 200.

// A Euler square (also called a Graeco-Latin square) is a pair of orthogonal latin squares. A latin square is an n × n array filled with the integers 1 to n each occurring once in each row and column - see Latin Squares. Two latin squares are orthogonal if each r between 1 and n in the 1st square is paired (i.e. occurs at the same position) exactly once with each s between 1 and n in the 2nd square.

// Example of Euler Square of size 3: 
// [[3,1,2],      [[3,2,1],
//  [2,3,1],       [2,1,3],
//  [1,2,3]],      [1,3,2]]

// Explanation:
// 1 in the 1st square is paired with 2 in the first row of the 2nd square, with 3 in the second row, and with 1 in the third row.
// 2 in the 1st square is paired in the 2nd square with 1 in the first row, 2 in the second row, and 3 in the third row.
// And 3 is paired with 3 in the first row, 1 in the second row, and 2 in the third row.

// If the 2nd square was a duplicate of the 1st, they would not be orthogonal, because each integer would be paired with itself three times.

// Example of Euler Square of size 5: 
// [[5, 2, 4, 1, 3],      [[5, 1, 2, 3, 4],
//  [4, 1, 3, 5, 2],       [4, 5, 1, 2, 3],
//  [3, 5, 2, 4, 1],       [3, 4, 5, 1, 2],
//  [2, 4, 1, 3, 5],       [2, 3, 4, 5, 1],
//  [1, 3, 5, 2, 4]]       [1, 2, 3, 4, 5]]

// Explanation: 1 in the 1st square is paired in successive rows of the 2nd square with 3, 5, 2, 4, 1. The reader is invited to verify that 2,3,4 and 5 in the 1st square are also paired with 1-5 in some order in the 2nd square.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

std::vector<std::vector<std::vector<int>>> createEulerSquare(int n) {
    std::vector<std::vector<int>> firSquare(n, std::vector<int>(n, 0));
    std::vector<std::vector<int>> secSquare(n, std::vector<int>(n, 0));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            firSquare[i][j] = (i + j) % n + 1;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            secSquare[i][j] = (i + 2 * j) % n + 1;

    return { firSquare, secSquare };
}

void print(std::vector<std::vector<std::vector<int>>> v) {
    for (size_t i = 0; i < v.size(); i++) {
        std::cout << "Square " << i + 1 << ":" << endl;
        for (size_t j = 0; j < v[i].size(); j++) {
            for (size_t k = 0; k < v[i][j].size(); k++) {
                std::cout << v[i][j][k] << ' ';
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<std::vector<std::vector<int>>> eulerSquare = createEulerSquare(3);

    print(eulerSquare);

    return 0;
}
//
std::vector<std::vector<std::vector<int>>> createEulerSquare(int n) {
    std::vector<std::vector<int>> firSquare(n, std::vector<int>(n, 0));
    std::vector<std::vector<int>> secSquare(n, std::vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            firSquare[i][j] = (i + j) % n + 1;
            secSquare[i][j] = (i + 2 * j) % n + 1;
        }      
    }
  
    return { firSquare, secSquare };
}
