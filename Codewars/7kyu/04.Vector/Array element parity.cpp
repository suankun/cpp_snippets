// https://www.codewars.com/kata/5a092d9e46d843b9db000064/train/cpp
#include <algorithm>
#include <vector>

int solve (std::vector<int> v){
    for (auto num: v) {
        if (std::count(v.begin(), v.end(), (num*-1))) continue;
        else return num;
    }
    return 0;
}
//
#include<set>
#include<numeric>

int solve (std::vector<int> v){
    std::set<int> s (v.begin(), v.end() );
    return std::accumulate(s.begin(), s.end(), 0);  
}
