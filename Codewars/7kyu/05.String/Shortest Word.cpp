// https://www.codewars.com/kata/57cebe1dc6fdc20c57000ac9/train/cpp
#include <iostream>
#include <string>
using namespace std;

int find_short(std::string str)
{
    size_t min_size {555};
    std::string temp_str;
    for (size_t i {}; i<str.length()+1; i++) {
        if (str[i] == ' ' || i == str.length()) {
            if (min_size>temp_str.length()) {
                min_size = temp_str.length();
                temp_str = "";
                continue;
            } else {
                temp_str = "";
                continue;
            }
        }
        temp_str += str[i];
    }
    return min_size;
}

int main() {
    std::string text {"Let's travel abroad shall we"}; // 2
    std::cout << find_short(text);

    return 0;
}
//
// #include <cctype>
// #include <string>

// using str_size = std::string::size_type;

// auto find_short(const std::string& str) -> str_size
// {
//   str_size min_len{str.length()};
//   str_size current_len{0};
  
//   for (auto c : str)
//   {
//     if (::isspace(c))
//     {
//       min_len = std::min(min_len, current_len);
//       current_len = 0;
//     }
//     else
//     {
//       current_len++;
//     }
//   }
//   return std::min(min_len, current_len);
// }