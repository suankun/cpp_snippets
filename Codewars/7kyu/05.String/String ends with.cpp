#include <iostream>
#include <string>
using namespace std;

// Complete the solution so that it returns true
// if the first argument(string) passed in ends
// with the 2nd argument (also a string).

// Examples:

// solution('abc', 'bc') // returns true
// solution('abc', 'd') // returns false

#include <string>
bool solution(std::string const &str, std::string const &ending) {
	string reversedStr;
	for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr.push_back(str[i]);
    }
	string reversedEnding;
	for (int i = ending.length() - 1; i >= 0; i--) {
        reversedEnding.push_back(ending[i]);
    }
	cout << reversedStr << ", " << reversedEnding << endl;
	for (int i {}; i < reversedEnding.length(); i++) {
		if (reversedStr[i] == reversedEnding[i]) {
			continue;
		} else {
			return false;
		}
	}
    return true;
}

int main() {
    string first_arg1 {"abc"};
    string second_arg1 {"bc"};
    string first_arg2 {"abc"};
    string second_arg2 {"d"};
    cout << boolalpha;
    cout << solution(first_arg1, second_arg1) << endl; // true
    cout << solution(first_arg2, second_arg2) << endl; // false
    
    return 0;
}

/////////////////////////////////////////////////////
// bool solution(std::string const &str, std::string const &ending) {
//     const int slen = str.length();
//     const int eLen = ending.length();
    
//     if (slen < eLen) {
//         return false;
//     }
    
//     for (int i = 1; i <= eLen; i++) {
//         if (str[slen - i] != ending[eLen - i]) {
//             return false;
//         }
//     }
//     return true;
// }
/////////////////////////////////////////////////////
// bool solution(const std::string& str, const std::string& ending) {
//   return str.size() >= ending.size() && str.compare(str.size() - ending.size(), std::string::npos, ending) == 0;
// }