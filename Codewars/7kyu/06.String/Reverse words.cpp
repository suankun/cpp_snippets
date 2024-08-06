// https://www.codewars.com/kata/5259b20d6021e9e14c0010d4/train/cpp
#include <iostream>
#include <string>
using namespace std;

std::string reverse_words(std::string str)
{
    std::string res;
    std::string temp_word;
    size_t str_len {str.length()};
    for (size_t i {}; i<str_len+1; i++) {
        if (isspace(str[i]) || i==str_len) {
            for (size_t j {}; j<temp_word.length()/2; j++) {
                char temp_ch = temp_word[j];
                temp_word[j] = temp_word[temp_word.length()-j-1];
                temp_word[temp_word.length()-j-1] = temp_ch;
            }
            res += temp_word;
            for (size_t k {i}; k<str_len; k++) {
                if (isspace(str[k])) {
                    res += str[k];
                    i++;
                }
                else break;
            }
            temp_word = "";
        }
        temp_word += str[i];
    }
    return res;
}

int main() {
    std::string test {"This is an example!"};  // "sihT si na !elpmaxe"
    std::string res = reverse_words(test); 
    cout << res;

    return 0;
}
///////////////
std::string reverse_words(std::string str)
{
  std::string out;
  std::string cword;
  for (char c : str) {
    if (c == ' ') {
      out += cword;
      out += c;
      cword = "";
      continue;
    }
    cword = c + cword;
  }
  out += cword;
  return out;
}
/////////////////
// std::string reverse_words(std::string str)
// { 
//   for (auto begin = str.begin(), end = begin; end != str.end(); begin = end + 1) {
//     end = find(begin, str.end(), ' ');
//     std::reverse(begin, end);
//   } 
//   return str;
// }