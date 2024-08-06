// https://www.codewars.com/kata/580a4734d6df748060000045/train/cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

std::string is_sorted_and_how(std::vector<int> array)
{
    std::string res;
    int flag {0};
    if (array[0] < array[1]) {
        for (size_t i {}; i<array.size()-1; i++) {
            if (array[i] <= array[i+1]) continue;
            else {
                flag = 1;
                break;
            }
        }
        res = flag ? "no" : "yes, ascending";
    } else if (array[0] > array[1]) {
        for (size_t i {}; i<array.size()-1; i++) {
            if (array[i] >= array[i+1]) continue;
            else {
                flag = 1;
                break;
            }
        }
        res = flag ? "no" : "yes, descending";
    }
    
    return res;
}

int main() {
    // std::vector<int> arr {15, 7, 3, -8}; // "yes, descending"
    std::vector<int> arr {4, 2, 30};     // "no"
    std::string one = is_sorted_and_how(arr);
    cout << one;

    return 0;
}
//
// #include <algorithm>
// #include <string>
// #include <vector>

// std::string is_sorted_and_how(const std::vector<int>& a)
// {
//     return std::is_sorted(std::begin(a), std::end(a)) ? "yes, ascending" :
//            std::is_sorted(std::rbegin(a), std::rend(a)) ? "yes, descending" :
//            "no";
// }