// https://www.codewars.com/kata/578aa45ee9fd15ff4600090d/train/cpp

// You will be given an array of numbers. You have to sort the odd numbers in ascending order while leaving the even numbers at their original positions.

// Examples
// [7, 1]  =>  [1, 7]
// [5, 8, 6, 3, 4]  =>  [3, 8, 6, 5, 4]
// [9, 8, 7, 6, 5, 4, 3, 2, 1, 0]  =>  [1, 8, 3, 6, 5, 4, 7, 2, 9, 0]

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
        std::vector<int> oddNums;
        std::vector<int> oddIdx;
        for (size_t i = 0; i < array.size(); i++)
            if (array[i] % 2 != 0) {
                oddNums.push_back(array[i]);
                oddIdx.push_back(i);
            }

        std::sort(oddNums.begin(), oddNums.end());

        for (size_t i = 0; i < oddIdx.size(); i++) {
            array[oddIdx[i]] = oddNums[i];
        }

        return array;
    }
};

void print(std::vector<int> & v) {
    for (int n : v)
        cout << n << ' ';
    cout << endl;
}

int main() {
        
        Kata kata;
        std::vector<int> actual;

        actual = kata.sortArray({ 5, 3, 2, 8, 1, 4 });
        print(actual);  // { 1, 3, 2, 8, 5, 4 }
    
        
        actual = kata.sortArray({ 5, 3, 1, 8, 0 });
        print(actual);  // { 1, 3, 5, 8, 0 };
    
    
        
        actual = kata.sortArray({ });
        print(actual);  // { };
    

    return 0;
}
