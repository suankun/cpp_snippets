// https://www.codewars.com/kata/5ac5e9aa3853da25d9000102/train/cpp
#include <iostream>
#include <vector>

using namespace std;

std::vector<int> orArrays(const std::vector<int>& arr1, const std::vector<int>& arr2, size_t default_size = 0) {
    std::vector<int> res;
    size_t len = arr1.size() > arr2.size() ? arr1.size() : arr2.size();
    for (size_t i = 0; i < len; i++) {
        size_t num1 = default_size, num2 = default_size;
        if (i < arr1.size()) {
            num1 = arr1[i];
        }
        if (i < arr2.size()) {
            num2 = arr2[i];
        }
        res.push_back(num1|num2);
    }
    return res;
}

int main() {
    std::vector<int> res1 = orArrays({1,2,3},{4,5,6});
    for (int& n : res1) cout << n << ' '; cout << endl;

    std::vector<int> res1 = orArrays({1,2,3},{1,2,3},3);
    for (int& n : res1) cout << n << ' '; cout << endl;

    // orArrays({1,2,3},{1,2,3});    // {1,2,3}
    // orArrays({1,2,3},{4,5,6})     // {5,7,7}
    // orArrays({1,2,3},{1,2})       // {1,2,3}
    // orArrays({1,2},{1,2,3})       // {1,2,3}
    // orArrays({1,2,3},{1,2,3},3)   // {1,2,3}

    return 0;
}
//
// #include <vector>

// std::vector<int> orArrays(const std::vector<int>& arr1, const std::vector<int>& arr2,const int O=0)
// {
//     std::vector<int>result(std::max(arr1.size(),arr2.size()));
//     for(int i=0 ;i<result.size();i++)
//         result[i]=(i<arr1.size()?arr1[i]:O)|(i<arr2.size()?arr2[i]:O);
//     return result;  
// }
