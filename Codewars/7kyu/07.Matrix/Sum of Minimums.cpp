// https://www.codewars.com/kata/5d5ee4c35162d9001af7d699/train/cpp
#include <iostream>
#include <vector>
using namespace std;

int sum_of_minimums(const std::vector<std::vector<int>> &numbers)
{
    int sum {};
    for (size_t i {}; i<numbers.size(); i++) {
        int min {numbers[i][0]};
        for (size_t j {}; j<numbers[i].size(); j++) {
            if (numbers[i][j]<min) min = numbers[i][j];
        }
        sum+=min;
    }
    return sum;
}

int main() {
    std::vector<vector<int>> test = {{7, 9, 8, 6, 2},
                                     {6, 3, 5, 4, 3},
                                     {5, 8, 7, 4, 5}};
    int sum_min = sum_of_minimums(test);
    cout << sum_min;

    return 0;
}
//
#include <vector>
#include <algorithm>

int sum_of_minimums(const std::vector<std::vector<int>> &numbers)
{
    int sum = 0;
    
    for(auto i: numbers){
        sum += *(std::min_element(i.begin(), i.end()));
    }
    
    return sum;
}
