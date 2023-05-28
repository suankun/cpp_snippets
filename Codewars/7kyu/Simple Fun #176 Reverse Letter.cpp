#include <iostream>
#include <string>
using namespace std;

// https://www.codewars.com/kata/58b8c94b7df3f116eb00005b/solutions/cpp

#include <ctype.h>

std::string reverse_letter(const std::string &str)
{
    std::string res;
    for (size_t i {str.length()-1}; i > 0; i--) if (isalpha(str[i])) res.push_back(str[i]);;
    if (isalpha(str[0])) res.push_back(str[0]);
    return res;
}

int main() {
    string word {"ultr53o?n"};  // "nortlu"
    cout << reverse_letter(word) << endl;

    return 0;
}

//////////////
// std::string reverse_letter(const std::string &str)
// {
//     std::stringstream result;
//     for (int i = str.length() - 1; i >= 0; --i)
//     {
//       char c = str[i];
//       if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//       { 
//         result << c;
//       }
//     }
    
//     return result.str();
// }
/////////////
#include <string>

using namespace std; 

string reverse_letter(const string &str)
{
  string noiseFree = "" ; 
  
  for (int i = str.length()-1 ; i >=0 ;i--)
  {if (isalpha(str[i])) {noiseFree += str[i]; }}

  return noiseFree ; 
}