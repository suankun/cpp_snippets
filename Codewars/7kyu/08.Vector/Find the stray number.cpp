// https://www.codewars.com/kata/57f609022f4d534f05000024/train/cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int stray(std::vector<int> numbers) {
    int counter {};
    for (auto num: numbers) {
        counter = count(numbers.begin(), numbers.end(), num);
        if (counter == 1) return num;
    }
    return 0;
}

int main() {
    vector <int> result1 {2, 1, 1};
    cout << "Result1:" << stray(result1) << endl;
    // vector <int> result2 {17, 17, 3, 17, 17, 17, 17}; //3
    // cout << "Result2:" << stray(result2) << endl;

    return 0;
}

//
/*
 * Count each value using std::count algorithm
 */

// int stray(std::vector<int> numbers) 
// {
//     //using a range based for loop to iterate over vector
//     int count;
//     for (auto& it : numbers)
//     {
//         count = std::count(numbers.begin(), numbers.end(), it);
//         if (count == 1)
//             return it;
//     }
//     return 0;
// };
//
// int stray(std::vector<int> numbers) {
//     sort(numbers.begin(), numbers.end());
//     vector<int>::iterator iter;
//     for (iter=numbers.begin(); iter != numbers.end(); iter++) {
//         if (numbers[0]==numbers[1]) return numbers.back();
//         else return numbers.front();
//     }
//     return 0;
// }