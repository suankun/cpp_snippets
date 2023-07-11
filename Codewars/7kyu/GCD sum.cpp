// https://www.codewars.com/kata/5dd259444228280032b1ed2a/train/cpp
#include <iostream>
using namespace std;

pair<int, int> solve(int s, int g){  
    pair<int, int> result;
    result.first = g;
    result.second = s - g;
    if (result.second % g != 0) {
        result.first = -1;
        result.second = -1;
    }
    return result;
}

int main() {
    // pair<int, int> res1 = solve(12, 4);
    // pair<int, int> res2 = solve(12, 5);
    pair<int, int> res3 = solve(8, 2);
    pair<int, int> res4 = solve(10, 3);
    // cout << res1.first << ',' << res1.second << endl;
    // cout << res2.first << ',' << res2.second << endl;
    cout << res3.first << ',' << res3.second << endl;
    cout << res4.first << ',' << res4.second << endl;

    return 0;
}
//
using namespace std;

pair<int, int> solve(int s, int g){  
    return (s % g == 0) ? make_pair(g, s-g) : make_pair(-1,-1);  
}
