// https://leetcode.com/problems/valid-perfect-square/description/
#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        int sqr = sqrt(num);
        int check = sqr * sqr;
        return num == check;
    }
};

int main() {
    cout << boolalpha;
    Solution res;
    cout << res.isPerfectSquare(16) << endl;
    cout << res.isPerfectSquare(14) << endl;
    

    return 0;
}
