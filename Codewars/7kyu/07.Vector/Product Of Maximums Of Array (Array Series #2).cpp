// https://www.codewars.com/kata/5a63948acadebff56f000018/train/cpp
#include <iostream>
#include <vector>
using namespace std;

#include <algorithm>

int maxProduct (vector<int>numbers , int sub_size)
{
    int max_prod {1};
    sort(numbers.begin(), numbers.end(), greater<int>());
    for (size_t i {}; i<sub_size; i++) {
        max_prod*=numbers[i];
    }
    return max_prod; 
}

int main() {
    vector<int> nums {4,3,5};  // 20   (5*4 = 22)
    cout << maxProduct(nums, 2) << endl;

    return 0;
}
//
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>

int maxProduct (std::vector<int>numbers , int sub_size) {
    std::nth_element(begin(numbers), begin(numbers) + sub_size, end(numbers), std::greater<>{}); 
    return std::accumulate(begin(numbers), begin(numbers) + sub_size, 1, std::multiplies<>{});
}
