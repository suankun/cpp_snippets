// https://www.codewars.com/kata/5526fc09a1bbd946250002dc/train/cpp

// You are given an array (which will have a length of at least 3, but could be very large) containing integers. The array is either entirely comprised of odd integers or entirely comprised of even integers except for a single integer N. Write a method that takes the array as an argument and returns this "outlier" N.

// Examples
// [2, 4, 0, 100, 4, 11, 2602, 36] -->  11 (the only odd number)

// [160, 3, 1719, 19, 11, 13, -21] --> 160 (the only even number)

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int FindOutlier(std::vector<int> arr)
{
    int result = 0, even = 0, odd = 0;

    for (int n : arr)
        n % 2 == 0 ? even++ : odd++;

    if (even % 2 == 0) {
        for (int n : arr)
            if (n % 2 == 0)
                result = n;
    }
    else {
        for (int n : arr)
            if (n % 2 != 0)
                result = n;
    }

    return result;
}

int main() {
        cout << FindOutlier({2, 3, 4})       << endl;  // 3
        cout << FindOutlier({1, 2, 3})       << endl;  // 2
        cout << FindOutlier({4, 1, 3, 5, 9}) << endl;  // 4

    return 0;
}
//
int FindOutlier(std::vector<int> arr)
{
    int even;
  	int odd;
  
  	int evenCount = 0;
  	int oddCount = 0;
  
  	for (auto a : arr)
  	  	a % 2 == 0 ? (evenCount++, even = a) : (oddCount++, odd = a);
  
  	return evenCount < oddCount ? even : odd;
}
