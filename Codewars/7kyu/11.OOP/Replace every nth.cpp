// https://www.codewars.com/kata/57fcaed83206fb15fd00027a/train/cpp
#include <iostream>
#include <string>

class Kata
{
public:
    std::string replaceNth(std::string text, int n, char oldValue, char newValue)
    {
        int cnt {};
        for (size_t i {}; i<text.length(); i++) {
          if (text[i] == oldValue) {
            cnt++;
            if (cnt == n) {
              text[i] = newValue;
              cnt = 0;
            }
          }
        }
        return text;
    }
};
//
class Kata
{
public:
    std::string replaceNth(std::string text, int n, char oldValue, char newValue)
    {
        int currN = 1;
        for(char &a : text)
        {
           if(a == oldValue && n == currN++) {
             a = newValue;  
             currN = 1;
            }
        }
        
        return text;
    }
};
