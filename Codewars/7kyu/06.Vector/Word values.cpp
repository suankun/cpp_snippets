// https://www.codewars.com/kata/598d91785d4ce3ec4f000018/train/cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;


std::vector<int> wordValue(std::vector <std::string> arr){
    std::vector<int> result;
    for (size_t i {}; i<arr.size(); i++) {
        int sum {};
        for (size_t j {}; j<arr[i].length(); j++) {
            if (arr[i][j] == ' ') continue;
            sum += arr[i][j] - 96;
        }
        sum *= (i+1);
        result.push_back(sum);
    }
	return result;
}


int main() {

    vector<string> arr {"abc","abc abc"};  // 6, 24
    vector<int> result = wordValue(arr);
    for (auto num: result) cout << num << ' ';
    cout << endl;

    return 0;
}
///////////////////
std::vector<int> wordValue(std::vector <std::string> arr){
	std::vector<int> r(arr.size());
  for (size_t i = 0; i < arr.size(); i++)
    for (const auto& c:arr[i])
      if (c != ' ') r[i] += (c - 96) * (i + 1);
  return r;
}
