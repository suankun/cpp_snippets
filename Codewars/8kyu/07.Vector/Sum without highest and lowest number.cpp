// https://www.codewars.com/kata/576b93db1129fcf2200001e6/train/cpp

#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int sum(vector<int> numbers)
{
    if (numbers.empty()) return 0;
    sort(numbers.begin(), numbers.end());
    int sum {};
    for (int i {1}; i < numbers.size()-1; i++) sum += numbers[i];
    return sum;
}

int main() {
    vector <int> num {6, 2, 1, 8, 10};
    for (auto n:num) cout << n << " ";
    cout << endl;

    return 0;
}
