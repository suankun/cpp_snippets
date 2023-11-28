// https://www.codewars.com/kata/5b728f801db5cec7320000c7/train/cpp
#include <iostream>
using namespace std;

std::string solve(const std::string &s, unsigned k)
{
    std::string result = s;

    for (char c = 'a'; k > 0 && c <= 'z'; c++)
    {
        size_t found = result.find(c);

        while (found != std::string::npos && k > 0)
        {
            result.erase(found, 1);
            k--;
            found = result.find(c);
        }
    }

    return result;
}

int main() {
    cout << solve("abracadabra", 1) << endl;  // 'bracadabra'
    cout << solve("abracadabra", 2) << endl;  // 'brcadabra'
    cout << solve("abracadabra", 6) << endl;  // 'rcdbr'
    cout << solve("abracadabra", 8) << endl;  // 'rdr'
    cout << solve("abracadabra", 50) << endl;  // ''

    return 0;
}
//
std::string solve(std::string s, unsigned k) {
  if(k >= s.length()) return "";
  
  char curChar = 'a';
  for (int j; k ; k--, s.erase(j, 1))
      for (j = s.find(curChar); j == std::string::npos;) 
        j = s.find(++curChar);

  return s;
}
