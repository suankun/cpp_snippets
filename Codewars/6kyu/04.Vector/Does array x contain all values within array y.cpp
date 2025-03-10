// https://www.codewars.com/kata/5143cc9694a24abcd2000001/train/cpp

// We want to extend the array class so that it provides a contains_all? method. This method will always assume that an array is passed in and will return true if all values in the passed in array are present within the current array.

// For example:

// items = std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9}

// contains_all(items, {1, 2, 3})  # should == true
// contains_all(items, {1, 5, 13}) # should == false because 13 is not in the items array

#include <iostream>
#include <vector>
using namespace std;

bool contains_all(const std::vector<int>& arr, const std::vector<int>& target) {
    bool isFound = false;
    for (int i = 0; i < target.size(); i++) {

        for (int j = 0; j < arr.size(); j++) {
            if (target[i] == arr[j]) {
                isFound = true;
                break;
            }
        }

        if (!isFound)
            return false;
        else
            isFound = false;
    }
    
    return true;
}

int main() {
    std::vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    cout << boolalpha;

    // Valid_tests
    cout << contains_all(nums, std::vector<int>{1, 2, 6})    << endl;  // true
    cout << contains_all(nums, std::vector<int>{1})          << endl;  // true
    cout << contains_all(nums, std::vector<int>{9})          << endl;  // true
    cout << contains_all(nums, std::vector<int>{2, 4, 6, 8}) << endl;  // true

    // Invalid_tests
    cout << contains_all(nums, std::vector<int>{1, 15, 6}) << endl;  // false
    cout << contains_all(nums, std::vector<int>{0})        << endl;  // false
    cout << contains_all(nums, std::vector<int>{10})       << endl;  // false
        
    return 0;
}
//
#include <vector>
#include <algorithm>

bool contains_all(const std::vector<int>& arr, const std::vector<int>& target) {
    for (auto &num : target) {
        if(std::find(arr.begin(), arr.end(), num) == arr.end())
            return false;
    }
    
    return true;
}