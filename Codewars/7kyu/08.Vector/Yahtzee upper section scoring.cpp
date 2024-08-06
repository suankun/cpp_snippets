// https://www.codewars.com/kata/63b4758f27f8e5000fc1e427/train/cpp
#include <iostream>
#include <vector>
#include <map>
using namespace std;

long yahtzee_upper(std::vector<int> arr) {
    long max = 0;
    std::map<int, int> numbers;

    for (const int& n : arr)
        numbers[n]++;

    for (auto p : numbers)
        if (max < p.first * p.second)
            max = p.first * p.second;

    return max;
}

int main()
{
    cout << yahtzee_upper({2, 3, 5, 5, 6}) << endl; //  10
    cout << yahtzee_upper({1, 1, 1, 1, 3}) << endl; //  4
    cout << yahtzee_upper({1, 1, 1, 3, 3}) << endl; //  6
    cout << yahtzee_upper({1, 2, 3, 4, 5}) << endl; //  5
    cout << yahtzee_upper({6, 6, 6, 6, 6}) << endl; //  30
    cout << yahtzee_upper({15, 9, 9, 8, 9}) << endl; //  27
    cout << yahtzee_upper({1654, 1654, 5099, 3086, 1654, 5099, 2274,
                                  1654, 1654, 1654, 1654, 1654, 3086, 4868, 1654, 4868, 1654,
                                  3086, 4868, 3086}) << endl;  // 16540

    return 0;
}
//
#include <vector>
#include <algorithm>

long yahtzee_upper(std::vector<int> arr) {
    long max = 0;
    long current = 0;
    
    for (const auto &a : arr){
        
        current =  std::count(arr.begin(), arr.end(), a) * a;
        
        if (max < current)
            max = current;
    }
    
    return max;
}