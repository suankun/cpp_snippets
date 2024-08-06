// https://www.codewars.com/kata/59f11118a5e129e591000134/train/cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int repeats(std::vector<int>v){
    int sum=0;
    sort(v.begin(), v.end());
    for (size_t i=0; i<v.size(); i++) {
        if (v[i]==v[i+1]) i++;
        else sum+=v[i];
    }

    return sum;
}

int main() {
    cout << repeats({4, 5, 7, 5, 4, 8}) << endl;  // 15
    cout << repeats({9, 10, 19, 13, 19, 13}) << endl;  // 19
    cout << repeats({16, 0, 11, 4, 8, 16, 0, 11}) << endl;  // 12
    cout << repeats({5, 17, 18, 11, 13, 18, 11, 13}) << endl;  // 22

    return 0;
}
//
#include<vector>
#include<algorithm>

int repeats(std::vector<int>v){
    int sum = 0;
    for (int n: v)
        sum += n* (std::count (v.begin(), v.end(), n) == 1);   
    return sum;      
}
