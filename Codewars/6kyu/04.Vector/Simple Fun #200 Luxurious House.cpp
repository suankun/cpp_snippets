// https://www.codewars.com/kata/58c8af49fd407dea5f000042/train/cpp
// Story&Task
// The capital of Berland has n multifloor buildings. The architect who built up the capital was very creative, so all houses in the city were built in one row.

// Let's enumerate all the houses from left to right, starting with 0. A house is considered to be luxurious if the number of floors in it is strictly greater than in each house with larger number. In other words, a house is luxurious if the number of floors in it is strictly greater than in all houses, located to the right from it.

// The new architect is interested in n questions, the ith of them is the following: "how many floors should be added to the ith house to make it luxurious?" (For each i from 1 to n, inclusive). You need to help him cope with this task.

// Note that all these questions are independent from each other — the answer to the question for house i does not affect other answers (i.e., the floors to the houses are not actually added).

// Input/Output
// [input] integer array houses
// Array of positive integers, representing the number of floors in each house.

// The ith element is the number of floors in the ith house.

// 1 ≤ houses.length ≤ 1000

// [output] an integer array
// An array has the same length as input array, the ith element represents the number of floors that should be added to the ith house to make it luxurious.

// Example
// For houses = [1,2,3,1,2], the output should be [3,2,0,2,0].

// For houses[0], 3 floors should be added, 
// then its floors is strictly greater than all houses of right side.

// For houses[1], 2 floors should be added.

// For houses[2], no need to add floor
// because it's already the luxurious.

// For houses[3], 2 floors need to added

// For houses[4], no house on the right, 
// so no need to add any floor.

#include <iostream>
#include <vector>

using namespace std;


std::vector<int> luxhouse(const std::vector<int> &houses) {
    std::vector<int> res(houses.size(), 0);

    for (size_t curHouse = 0; curHouse < houses.size() - 1; curHouse++) {

        int maxRight = 0;
        for (size_t curRight = curHouse + 1; curRight < houses.size(); curRight++)
            if (maxRight < houses[curRight])
                maxRight = houses[curRight];

        res[curHouse] = houses[curHouse] > maxRight ? 0 : (maxRight + 1) - houses[curHouse];

    }

    return res;
}

void print(const std::vector<int> &v) {
    for (const int & n : v)
        cout << n << ' ';
    cout << endl;
}

int main() {

    // std::vector<int> res1 = luxhouse(std::vector<int>{1, 2, 3, 1, 2});  print(res1); // Equals(std::vector<int>{3, 2, 0, 2, 0}));
    // std::vector<int> res2 = luxhouse(std::vector<int>{3, 2, 1, 4});  print(res2); // Equals(std::vector<int>{2, 3, 4, 0}));
    // std::vector<int> res3 = luxhouse(std::vector<int>{1, 2, 3});  print(res3); // Equals(std::vector<int>{3, 2, 0}));
    // std::vector<int> res4 = luxhouse(std::vector<int>{3, 2, 1});  print(res4); // Equals(std::vector<int>{0, 0, 0}));
    // std::vector<int> res5 = luxhouse(std::vector<int>{1, 1, 1});  print(res5); // Equals(std::vector<int>{1, 1, 0}));
    std::vector<int> res6 = luxhouse(std::vector<int>{5, 4, 0, 7, 5});  print(res6);
    // Equals(std::vector<int>{3, 4, 8, 0, 0}));

    return 0;
}
