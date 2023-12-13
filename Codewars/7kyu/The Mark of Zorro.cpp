// https://www.codewars.com/kata/63115a60e5da9e004aa3004f/train/cpp
#include <iostream>
#include <vector> 
using namespace std;

template <typename T> std::vector<T> zorro(const std::vector<std::vector<T>> matrix) {
    std::vector<T> res;
    for (size_t i=0; i<matrix.size(); i++) {
        if (i==0) for (size_t j=0; j<matrix[i].size(); j++) res.push_back(matrix[i][j]);
        if (i!=0 && i!=matrix.size()-1) res.push_back(matrix[i][matrix.size()-i-1]);
        if (i==matrix.size()-1) for (size_t j=0; j<matrix[i].size(); j++) res.push_back(matrix[i][j]);
    }

    return res;
}

int main() {
    std::vector<std::vector<int>> matrix = {
        {1,3,4},
        {9,9,3},
        {6,7,8}
      };
    // {1,3,4,9,6,7,8};

    std::vector<int> res = zorro(matrix);
    for (auto n: res) cout << n << ' ';
    cout << endl;

    return 0;
}
//
#include <vector> 

template <typename T>
std::vector<T> zorro(const std::vector<std::vector<T>> matrix) {
    if (matrix.empty())
        return {};
    
    std::vector<T> z(matrix[0].begin(), matrix[0].end());
    
    if(matrix.size() > 2)
    {
        for(size_t i = 1; i < matrix.size() - 1; ++i)
        z.push_back(matrix[i][matrix.size() - i - 1]);
    }

    z.insert(z.end(), matrix[matrix.size() - 1].begin(), matrix[matrix.size() - 1].end());
    
    return z;
}
