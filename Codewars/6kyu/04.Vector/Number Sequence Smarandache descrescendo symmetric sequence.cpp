// https://www.codewars.com/kata/5fba963d18f1e70022a26c39/train/cpp

// write a function solve(n, bound) which builds this sequence until an element in the sequnce equals bound (not including bound). Return the sum of every nth element of the sequence (not including the 0th element).

// Example
// solve(2, 4) produces the following sequence

// 1, 
// 1, 2, 1, 
// 1, 2, 3, 2, 1, 
// 1, 2, 3, 

// solve(2, 4) = 2 + 1 + 3 + 1 + 2 = 9
// Other examples
// solve(3, 3) = 1
// solve(2, 3) = 2 + 1 = 3
// Note
// bound will always be greater than 1 (bound>1)

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print(std::vector<int> nums) {
    for (int n : nums)
        cout << n << ' ';
    cout << endl;
}

int solve(int n, int bound) {
    std::vector<int> nums;

    int counter = 1;
    bool flag = true;
    while (flag)
    {
        for (int i = 1; i < counter; i++)
            nums.push_back(i);

        for (int i = counter; i > 0; i--) {
            if (i == bound) {
                flag = false;
                break;
            }

            nums.push_back(i);
        }

        counter++;
    }

    int sum = 0;
    for (size_t i = n; i < nums.size(); i += n)
        sum += nums[i];

    return sum;
}

int main() {
    
    cout << solve(2, 4) << endl;    // 9
    cout << solve(3, 3) << endl;    // 1
    cout << solve(2, 3) << endl;    // 3
    cout << solve(2, 400) << endl;  // 10666599

    return 0;
}
