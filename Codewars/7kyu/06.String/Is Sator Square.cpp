// https://www.codewars.com/kata/5cb7baa989b1c50014a53333/train/cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool is_sator_square(const std::vector<std::vector<char>>& tablet) {
    int n = tablet.size();
    int i = 0, j = n - 1;

    // Check horizontal and vertical palindromes
    while (i < j) {
        std::string row1(tablet[i].begin(), tablet[i].end());
        std::string row2(tablet[j].rbegin(), tablet[j].rend());
        if (row1 != row2) return false;
        i++;
        j--;
    }

    // Check if rows are equal to columns
    for (int k = 0; k < n; k++) {
        std::string row(tablet[k].begin(), tablet[k].end());
        std::string column;
        for (int m = 0; m < n; m++) {
            column += tablet[m][k];
        }
        if (row != column) return false;
    }

    return true;
}
//
#include <vector>

bool is_sator_square(const std::vector<std::vector<char>>& tablet) {
    const std::size_t size = tablet.size();
    for(std::size_t i = 0; i < size / 2; ++i) {
        for(std::size_t j = 0; j < size; ++j) {
            if(tablet[i][j] != tablet[size - i - 1][size - j - 1]) return false;
            if(tablet[j][i] != tablet[size - j - 1][size - i - 1]) return false;
            if(tablet[j][i] != tablet[size - i - 1][size - j - 1]) return false;
            if(tablet[i][j] != tablet[size - j - 1][size - i - 1]) return false;
        }
    }
    return true;
}
