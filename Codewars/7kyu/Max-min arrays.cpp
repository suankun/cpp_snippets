// https://www.codewars.com/kata/5a090c4e697598d0b9000004/train/cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


std::vector<int> solve(std::vector<int>v) {
    sort(v.begin(), v.end(), std::greater<int>());
    for (auto n: v) std::cout << n << ' ';
    std::cout << std::endl;
    std::vector<int> result;
    for (size_t i {}; i<v.size()/2; i++) {
        result.push_back(v[i]);
        result.push_back(v[v.size()-i-1]);
    }
    if (v.size()%2!=0) result.push_back(v[v.size()/2]);
    return result;
}

int main()
{
    vector<int> one {15,11,10,7,12};  // 15,7,12,10,11
    vector<int> result = solve(one);
    for (auto n: result) std::cout << n << ' ';

    return 0;
}
//////////////
#include <algorithm>
using namespace std;

std::vector<int> solve(std::vector<int> v) {
    //..
 for (int i = 0, len = v.size(); i < len; i+=2)
	{
		swap(v[i], *max_element(v.begin() + i, v.end()));
		if(i+1<len)
			swap(v[i + 1], *min_element(v.begin() + i, v.end()));
	}

	return v;  
}