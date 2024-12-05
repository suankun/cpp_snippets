// https://www.codewars.com/kata/57b6f5aadb5b3d0ae3000611/train/cpp

// You get an array of arrays.
// If you sort the arrays by their length, you will see, that their length-values are consecutive.
// But one array is missing!


// You have to write a method, that return the length of the missing array.

// Example:
// [[1, 2], [4, 5, 1, 1], [1], [5, 6, 7, 8, 9]] --> 3

// If the array of arrays is null/nil or empty, the method should return 0.

// When an array in the array is null or empty, the method should return 0 too!
// There will always be a missing element and its length will be always between the given arrays.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

template<class TYPE>
int getLengthOfMissingArray(std::vector<std::vector<TYPE>> arrayOfArrays)
{
    std::sort(arrayOfArrays.begin(), arrayOfArrays.end(), [](const std::vector<TYPE> & a, const std::vector<TYPE> & b){ return a.size() < b.size(); });

    for (size_t i = 0; i < arrayOfArrays.size(); i++)
        if (arrayOfArrays[i].size() == 0)
            return 0;
        else if (arrayOfArrays[i].size() + 1 != arrayOfArrays[i + 1].size())
            return arrayOfArrays[i].size() + 1;

    return 0;
}

int main() {
    std::vector<std::vector<int>> test;

    // test = {};
    // cout << getLengthOfMissingArray(test) << endl; // 0

    // test = {
    //     {}, {1, 2, 3}, {1, 2}
    // };
    // cout << getLengthOfMissingArray(test) << endl; // 1

    test = {
        { 1, 2 }, { 4, 5, 1, 1 }, { 1 }, { 5, 6, 7, 8, 9 }
    };
    cout << getLengthOfMissingArray(test) << endl; // 1

    return 0;
}
//
#include <algorithm>

template<class T>
bool compareBySize(std::vector<T> const &a, std::vector<T> const &b)
{
    return a.size() < b.size();
}

template<class T>
int getLengthOfMissingArray(std::vector<std::vector<T>> arrayOfArrays)
{
    std::sort(arrayOfArrays.begin(), arrayOfArrays.end(), compareBySize<T>);
    
    int missing = arrayOfArrays[0].size();
    for (auto it = arrayOfArrays.begin(); it != arrayOfArrays.end(); it++, missing++)
        if ((*it).size() != missing || missing == 0)
            return missing;

    return 0;
}