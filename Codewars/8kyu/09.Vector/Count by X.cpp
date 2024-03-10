// https://www.codewars.com/kata/5513795bd3fafb56c200049e/train/cpp
#include <iostream>
#include <vector>
std::vector<int> countBy(int x,int n){
    std::vector <int> res;
    for (int i {1}; i <= n; i++) {
        res.push_back(x*i);
    }
    return res;
}