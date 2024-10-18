// https://www.codewars.com/kata/63b84f54693cb10065687ae5/train/cpp

// Given two positive integers m (width) and n (height), fill a two-dimensional list (or array) of size m-by-n in the following way:

// (1) All the elements in the first and last row and column are 1.

// (2) All the elements in the second and second-last row and column are 2, excluding the elements from step 1.

// (3) All the elements in the third and third-last row and column are 3, excluding the elements from the previous steps.

// And so on ...

// Examples
// Given m = 5, n = 8, your function should return

// [[1, 1, 1, 1, 1],
//  [1, 2, 2, 2, 1],
//  [1, 2, 3, 2, 1],
//  [1, 2, 3, 2, 1],
//  [1, 2, 3, 2, 1], 
//  [1, 2, 3, 2, 1],
//  [1, 2, 2, 2, 1],
//  [1, 1, 1, 1, 1]]
// Given m = 10, n = 9, your function should return

// [[1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
//  [1, 2, 2, 2, 2, 2, 2, 2, 2, 1],
//  [1, 2, 3, 3, 3, 3, 3, 3, 2, 1], 
//  [1, 2, 3, 4, 4, 4, 4, 3, 2, 1], 
//  [1, 2, 3, 4, 5, 5, 4, 3, 2, 1], 
//  [1, 2, 3, 4, 4, 4, 4, 3, 2, 1], 
//  [1, 2, 3, 3, 3, 3, 3, 3, 2, 1], 
//  [1, 2, 2, 2, 2, 2, 2, 2, 2, 1], 
//  [1, 1, 1, 1, 1, 1, 1, 1, 1, 1]]

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(const std::vector<std::vector<int>>& vec) {
    for (const auto& row : vec) {
        for (const auto& element : row)
            std::cout << element << " ";

        std::cout << std::endl;
    }
}

std::vector<std::vector<int>> create_box(int m, int n) {
    std::vector<std::vector<int>> box(n, std::vector<int>(m));
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            box[i][j] = std::min({i, n - i - 1, j, m - j - 1}) + 1;
    
    return box;
}

int main() {
    cout << boolalpha;

    std::vector<std::vector<int>> box_5_8 = {
        {1, 1, 1, 1, 1}, 
        {1, 2, 2, 2, 1}, 
        {1, 2, 3, 2, 1}, 
        {1, 2, 3, 2, 1}, 
        {1, 2, 3, 2, 1}, 
        {1, 2, 3, 2, 1}, 
        {1, 2, 2, 2, 1}, 
        {1, 1, 1, 1, 1}
    };
    std::vector<std::vector<int>> res1 = create_box(5, 8);
    cout << (res1 == box_5_8) << endl;

    // std::vector<std::vector<int>> box_10_9 = {
    //     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, 
    //     {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
    //     {1, 2, 3, 3, 3, 3, 3, 3, 2, 1}, 
    //     {1, 2, 3, 4, 4, 4, 4, 3, 2, 1}, 
    //     {1, 2, 3, 4, 5, 5, 4, 3, 2, 1}, 
    //     {1, 2, 3, 4, 4, 4, 4, 3, 2, 1}, 
    //     {1, 2, 3, 3, 3, 3, 3, 3, 2, 1}, 
    //     {1, 2, 2, 2, 2, 2, 2, 2, 2, 1}, 
    //     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    // };
    // std::vector<std::vector<int>> res2 = create_box(10, 9);
    // cout << (res2 == box_10_9) << endl;

    // std::vector<std::vector<int>> box_12_15 = {
    //     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, 
    //     {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1}, 
    //     {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 2, 1}, 
    //     {1, 2, 3, 4, 4, 4, 4, 4, 4, 3, 2, 1}, 
    //     {1, 2, 3, 4, 5, 5, 5, 5, 4, 3, 2, 1}, 
    //     {1, 2, 3, 4, 5, 6, 6, 5, 4, 3, 2, 1}, 
    //     {1, 2, 3, 4, 5, 6, 6, 5, 4, 3, 2, 1}, 
    //     {1, 2, 3, 4, 5, 6, 6, 5, 4, 3, 2, 1}, 
    //     {1, 2, 3, 4, 5, 6, 6, 5, 4, 3, 2, 1}, 
    //     {1, 2, 3, 4, 5, 6, 6, 5, 4, 3, 2, 1}, 
    //     {1, 2, 3, 4, 5, 5, 5, 5, 4, 3, 2, 1}, 
    //     {1, 2, 3, 4, 4, 4, 4, 4, 4, 3, 2, 1}, 
    //     {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 2, 1}, 
    //     {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1}, 
    //     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    // };
    // std::vector<std::vector<int>> res3 = create_box(12, 15);
    // cout << (res3 == box_12_15) << endl;

    // std::vector<std::vector<int>> box_21_11 = {
    //     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, 
    //     {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1}, 
    //     {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 1}, 
    //     {1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 2, 1}, 
    //     {1, 2, 3, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 3, 2, 1}, 
    //     {1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5, 4, 3, 2, 1}, 
    //     {1, 2, 3, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 3, 2, 1}, 
    //     {1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 2, 1}, 
    //     {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 1}, 
    //     {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1}, 
    //     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    // };
    // std::vector<std::vector<int>> res4 = create_box(21, 11);
    // cout << (res4 == box_21_11) << endl;

    // std::vector<std::vector<int>> edge1 = {{1}, {1}, {1}, {1}, {1}, {1}};
    // std::vector<std::vector<int>> res5 = create_box(1, 6);
    // cout << (res5 == edge1) << endl;

    // std::vector<std::vector<int>> edge2 = {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
    // std::vector<std::vector<int>> res6 = create_box(10, 1);
    // cout << (res6 == edge2) << endl;

    // std::vector<std::vector<int>> edge3 = {{1}};
    // std::vector<std::vector<int>> res7 = create_box(1, 1);
    // cout << (res7 == edge3) << endl;

    
    return 0;
}
