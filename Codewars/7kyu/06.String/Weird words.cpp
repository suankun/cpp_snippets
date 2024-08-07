// https://www.codewars.com/kata/57b2020eb69bfcbf64000375/train/cpp
#include <string>
#include <cctype>

std::string nextLetter(std::string str)
{
  for (char & ch : str)
    if (isalpha(ch))
        if (ch == 'Z')
            ch = 'A';
        else if (ch == 'z')
            ch = 'a';
        else
            ch++;
    return str;
}
//
#include <cctype>

std::string nextLetter(std::string str)
{
    for (char &c : str) {
        if (std::isalpha(c)) {
            c++;
            if (c == 91 || c == 123) c -= 26;
            // 91 is char after 'Z', 123 is char after 'z'
        }
    }
    return str;
}
