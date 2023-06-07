// https://www.codewars.com/kata/556e0fccc392c527f20000c5/train/cpp
#include <iostream>
#include <vector>
using namespace std;	

std::vector<int> xbonacci(std::vector<int> signature, int n)
{
    std::vector<int> res = signature;
    int size = signature.size();
    for (int i {size}; i<n; i++) {
        int temp_num {};
        for (int j {size}; j>0; j--) {
            temp_num+=res[res.size()-j];
        }
        res.push_back(temp_num);
        temp_num=0;
    }
	std::vector<int> final_res;
	for (int k {}; k<n; k++) final_res.push_back(res[k]);
    return final_res;
}

int main() {
	vector<int> one {0, 1};
	vector<int> res = xbonacci(one, 10);  // 0,1,1,2,3,5,8,13,21,34
	for (auto num: res) cout << num << ' ';
	cout << endl;

	return 0;
}
///////////
std::vector<int> xbonacci(std::vector<int> signature, int n)
{
    int k = signature.size();
    signature.resize(n);
    
    for (int i = k; i < n; ++i)
      for (int j = 1; j <= k; ++j)
        signature[i] += signature[i-j];
    
    return signature;
}
