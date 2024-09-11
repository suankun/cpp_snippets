// https://www.codewars.com/kata/517abf86da9663f1d2000003/train/cpp
#include <string>
#include <cctype>

std::string to_camel_case(std::string text) {
    std::string toCamelCase;

    bool isAlpha = true;

    for (char ch : text) {
        if (std::isalpha(ch)) {
            if (isAlpha == false) {
                toCamelCase += std::toupper(ch);

                isAlpha = true;
            }
            else {
                toCamelCase += ch;
            }
        }
        else {
            isAlpha = false;
        }
    }

    return toCamelCase;
}
//
#include <string>

std::string to_camel_case(std::string text)
{
  for(int i = 0; i < text.size(); i++)
  {
        if(text[i] == '-' || text[i] == '_') {
            text.erase(i,1);
            text[i] = toupper(text[i]);
        }
  }
  return text;
}
