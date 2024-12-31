// https://www.codewars.com/kata/56f2d43fe40b70a442000f26/train/cpp

// Given any number of arrays each sorted in ascending order, find the nth smallest number of all their elements.

// All the arguments except the last will be arrays, the last argument is n.

// nthSmallest([1,5], [2], [4,8,9], 4) // returns 5 because it's the 4th smallest value
// Be mindful of performance.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int nthSmallest(std::vector<std::vector<int>> arr, int n)
{
    std::vector<int> allNumbers;

    for (std::vector v : arr)
        for (int num : v)
            allNumbers.push_back(num);

    sort(allNumbers.begin(), allNumbers.end());

    return allNumbers[n - 1];
}

int main() {
    int actual = nthSmallest({ { 1, 5 }, { 2 }, { 4, 8, 9 } }, 4);
    cout << actual << endl;    

    return 0;
}
