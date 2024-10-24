// https://www.codewars.com/kata/57f6ad55cca6e045d2000627/train/cpp
#include <iostream>
#include <vector>
using namespace std;

std::vector<int> squareOrSquareRoot(const std::vector<int>& array)
{
    std::vector<int> res;
    for (auto n: array) {
        if (n==1) {
            res.push_back(1);
            continue;
        }
        for (int i=0; i<=n/2; i++) {
            if (i*i == n) {
                res.push_back(i);
                break;
            }
            if (i==n/2) res.push_back(n*n);
        }
    }
    return res;
}

int main() {
    std::vector<int> res = squareOrSquareRoot({4, 3, 9, 7, 2, 1});  // {2, 9, 3, 49, 4, 1}
    for (auto n: res) cout << n << ' ';

    return 0;
}
//
// #include <vector>
// #include <math.h>
// using namespace std;

// vector<int> squareOrSquareRoot(const vector<int> array)
// {
// 	vector<int> ans;
// 	for (int i : array) {
// 		if (float(sqrt(i)) == int(sqrt(i))) {
// 			ans.push_back(int(sqrt(i)));
// 		}
// 		else {
// 			ans.push_back(pow(i, 2));
// 		}
// 	}
// 	return ans;
// }
