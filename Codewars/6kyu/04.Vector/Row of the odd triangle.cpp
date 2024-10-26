// https://www.codewars.com/kata/5d5a7525207a674b71aa25b5/train/cpp
// Given a triangle of consecutive odd numbers:

//              1
//           3     5
//        7     9    11
//    13    15    17    19
// 21    23    25    27    29
// ...
// find the triangle's row knowing its index (the rows are 1-indexed), e.g.:

// odd_row(1)  ==  [1]
// odd_row(2)  ==  [3, 5]
// odd_row(3)  ==  [7, 9, 11]
// Note: your code should be optimized to handle big inputs.

#include <vector>

std::vector<unsigned long long> odd_row(unsigned int n) {
    unsigned long long first = static_cast<unsigned long long>(n) * (n - 1) + 1;
  
    std::vector<unsigned long long> row;
    row.reserve(n);
  
    for (unsigned int i = 0; i < n; i++)
        row.push_back(first + i * 2);
  
    return row;
}
//
#include <vector>

std::vector<unsigned long long> odd_row(unsigned long long n) {
    std::vector<unsigned long long> row(n);

    unsigned long long base = n * (n - 1);

    for (unsigned long long i = 0; i < n; i++)
        row[i] = base + i * 2 + 1;

    return row;
}
