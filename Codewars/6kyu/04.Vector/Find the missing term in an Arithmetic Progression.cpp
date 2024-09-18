// https://www.codewars.com/kata/52de553ebb55d1fca3000371/train/cpp
#include <iostream>
#include <vector>
#include <numeric>

static long findMissing(std::vector<long> list) {
    long n = list.size() + 1;
    long expected_sum = (list[0] + list.back()) * n / 2;
    
    long actual_sum = std::accumulate(list.begin(), list.end(), 0L);
    
    return expected_sum - actual_sum;
}

int main() {
    std::vector<long> list = {-23, -19, -15, -11}; // The missing number is -17
    
    std::cout << "The missing number is: " << findMissing(list) << std::endl;

    return 0;
}
//
static long findMissing(std::vector<long> list){
    long diff = (list.back() - list.front()) / static_cast<long>(list.size());
    for (int i = 0; i < list.size(); ++i)
        if (list[i] + diff != list[i + 1])
            return list[i] + diff;
}
