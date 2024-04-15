// https://www.codewars.com/kata/57e76bc428d6fbc2d500036d/train/cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

std::vector<std::string> string_to_array(const std::string& s) {
	std::vector<std::string> res;
	std::string temp_word = "";
	for (size_t i {}; i<s.length()+1; i++) {
		if (s[i]==' ' || i==s.length()) {
		res.push_back(temp_word);
		temp_word = "";
		continue;
		} else {
		temp_word+=s[i];
		}
	}
	return res;
}

int main() {
	string one {"some value"};
	vector res = string_to_array(one);
	for (auto word: res) cout << word << " ";

	return 0;
}
///////////
#include <vector>
#include <string>

std::vector<std::string> string_to_array(const std::string& str) {
    if(str.empty())
      return std::vector<std::string>{""};
    std::vector<std::string> ans;
    int i = 0;
    while(i <= str.size()){
      std::string s;
      while(str[i] != ' ' && i != str.size()){
        s += str[i];
        i++;
      }      
      ans.push_back(s);
      i++;
    }
  return ans;
}
