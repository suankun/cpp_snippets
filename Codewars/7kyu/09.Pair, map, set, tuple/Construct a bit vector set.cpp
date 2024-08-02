// https://www.codewars.com/kata/52f5424d0531259cfc000d04/train/cpp
#include <vector>
#include <cmath>
#include <set>

int sort_by_bit(const std::vector<int>& array) {
    std::set<int> unique;
    
    int sum = 0;
    
    for (const int & n : array) {
        if (unique.find(n) != unique.end())
        continue;
        else
        unique.insert(n);
        
        sum += pow(2, n);
    }
    
    return sum;
}
//
#include <vector>

int sort_by_bit(const std::vector<int>& array) {
    int sum = 0;
    for(int i: array){
        int x = 1 << i;
        sum |= x;
    }
    return sum;
}
