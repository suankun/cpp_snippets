// https://www.codewars.com/kata/5a651865fd56cb55760000e0/train/cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> arrayLeaders(const vector<int>& numbers)
{
    vector<int> res;
    int sum {};
    for (size_t i {}; i<numbers.size(); i++) {
        sum = 0;
        for (size_t j {i+1}; j<numbers.size(); j++) {
            sum+=numbers[j];
        }
        if (numbers[i]>sum) res.push_back(numbers[i]);
    }
    return res;
}

int main() {
    // vector<int> nums {16, 17, 4, 3, 5, 2};  // 17, 5, 2
    vector<int> nums {5, 2, -1};  // 5, 2
    vector<int> res = arrayLeaders(nums);
    for (auto num: res) cout << num << " ";
    cout << endl;

    return 0;
}
///////////////
