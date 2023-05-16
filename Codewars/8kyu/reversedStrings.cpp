#include <string>
using namespace std ; 

string reverseString (string str )
{
  string reversedStr;
	for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr.push_back(str[i]);
  }
  return reversedStr;
}

// #include <algorithm>
// #include <string>

// std::string reverseString(std::string str) {
//   std::reverse(str.begin(), str.end());
//   return str;
// }