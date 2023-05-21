#include <iostream>
#include <string>
using namespace std;

bool is_isogram(std::string str) {
  if(str == "") return true;
  for (size_t i {}; i < str.length()-1; i++) {
    for (size_t j {i+1}; j < str.length(); j++) {
      if (tolower(str[i]) == tolower(str[j])) return false;
    }
  }
  return true;
}

int main() {
	cout << boolalpha;
	// bool result1 = is_isogram("Dermatoglyphics"); // true
	bool result2 = is_isogram(""); // true
	bool result3 = is_isogram("isIsogram"); // false
	// cout << result1 << endl;
	cout << result2 << endl;
	cout << result3 << endl;

    return 0;
}

/////////////////////////////////////////////////////
#include <cctype>
#include <unordered_set>

bool is_isogram(std::string str)
{
    std::unordered_set<char> char_set;
    for (const auto &c : str) {
        auto c_lower = std::tolower(c);
        if (char_set.count(c_lower) == 0) char_set.insert(c_lower);
        else return false;
    }
    return true;
}