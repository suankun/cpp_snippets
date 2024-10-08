// https://www.codewars.com/kata/645fb55ecf8c290031b779ef/train/cpp

// A latin square is an n × n array filled with the integers 1 to n, each occurring once in each row and column.

// Here are examples of latin squares of size 4 and 7:

// [[1, 4, 3, 2],      [[2, 3, 1, 7, 4, 6, 5], 
//  [4, 3, 2, 1],       [7, 1, 6, 5, 2, 4, 3], 
//  [3, 2, 1, 4],       [6, 7, 5, 4, 1, 3, 2], 
//  [2, 1, 4, 3]]       [4, 5, 3, 2, 6, 1, 7], 
//                      [5, 6, 4, 3, 7, 2, 1], 
//                      [1, 2, 7, 6, 3, 5, 4], 
//                      [3, 4, 2, 1, 5, 7, 6]]
// Latin squares have many practical uses, for example in error-correcting-codes and the design of agricultural experiments. See https://en.wikipedia.org/wiki/Latin_square for more details. Sudoku is a special type of 9 x 9 latin square, with additional conditions.

// Task: Write a function that returns a latin square for any positive integer n.

#include <vector>

std::vector<std::vector<int>> make_latin_square(int n) {
    std::vector<std::vector<int>> latin_square(n, std::vector<int>(n));
  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int nextNumber = (i + j + 1) % n;
            if (nextNumber == 0)
                nextNumber = n;
            
            latin_square[i][j] = nextNumber;
        }
    }
    
    return latin_square;
}
//
std::vector<std::vector<int>> make_latin_square(int n) {
    std::vector<std::vector<int>> latin_square(n, std::vector<int>(n));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            latin_square[i][j] = (j + i + 1) > n ? (j + i + 1) % n : j + i + 1;
    
    return latin_square;
}
