// https://www.codewars.com/kata/5d376cdc9bcee7001fcb84c0/train/cpp
#include <iostream>
#include <vector>
using namespace std;

std::vector<int> oddOnesOut(const std::vector<int>& numbers) {
    int len = numbers.size();
    std::vector<int> result;
    int cnt=0;
    for (int i=0; i<len; i++) {
        for (int j=0; j<len; j++) {
            if (numbers[i]==numbers[j]) cnt++;
        }
        if (cnt%2==0) result.push_back(numbers[i]);
        cnt=0;
    }
    return result;
}

int main() {
    vector<int> nums = {26, 23, 24, 17, 23, 24, 23, 26};
    vector<int> res = oddOnesOut(nums);
    for (auto n: res) cout << n << ' ';  // {26, 24, 24, 26}
    cout << endl;

    return 0;
}
//
#include <vector>
#include <bits/stdc++.h>
using namespace std;
std::vector<int> oddOnesOut(const std::vector<int> &numbers)
{
    vector<int> answer;
    for (auto i: numbers)
    {
        if (count(numbers.begin(), numbers.end(), i)%2==0)
        {
            answer.push_back(i);
        }
    }
    return answer;
}