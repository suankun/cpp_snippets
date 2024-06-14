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
