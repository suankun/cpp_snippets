// https://www.codewars.com/kata/5ba38ba180824a86850000f7/train/cpp
#include <iostream>
#include <vector>
using namespace std;

std::vector<int> solve(std::vector<int> vec){    
    std::vector<int> result;
    for (size_t i {}; i<vec.size(); i++) {
        int flag = 0;
        for (size_t j {i+1}; j<vec.size(); j++) {
            if (vec[i]!=vec[j]) continue;
            else {
                flag = 1;
                break;
            }
        }
        if (!flag) result.push_back(vec[i]);
    }
    return result;
}

int main() {

    vector<int> arr {3,4,4,3,6,3};  // 4,6,3
    vector<int> result = solve(arr);
    for (auto num: result) cout << num << ' ';
    cout << endl;

    return 0;
}
///////////
#include <vector>
#include <unordered_set>

std::vector<int> solve(std::vector<int> vec){    
    std::unordered_set<int> s(vec.rbegin(), vec.rend());
    vec.assign(s.begin(),s.end());
    return vec;
}