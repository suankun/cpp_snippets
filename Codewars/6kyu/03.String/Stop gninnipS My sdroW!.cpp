// https://www.codewars.com/kata/5264d2b162488dc400000001/train/cpp
// Write a function that takes in a string of one or more words, and returns the same string, but with all words that have five or more letters reversed (Just like the name of this Kata). Strings passed in will consist of only letters and spaces. Spaces will be included only when more than one word is present.

// Examples:

// "Hey fellow warriors"  --> "Hey wollef sroirraw" 
// "This is a test        --> "This is a test" 
// "This is another test" --> "This is rehtona test"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

std::string spinWords(const std::string &str)
{
    std::string word;

    std::istringstream istr(str);
    std::string buf;
    bool isFirst = true;
    while (istr >> buf)
    {
        if (isFirst)
            isFirst = false;
        else
            word += ' ';

        if (buf.length() >= 5) {
            for (size_t curChar = 0; curChar < buf.length() / 2; curChar++) {
                char tempCh = buf[curChar];
                buf[curChar] = buf[buf.length() - 1 - curChar];
                buf[buf.length() - 1 - curChar] = tempCh;
            }
        }

        word += buf;
    }

    return word;
}


int main() {
    cout << spinWords("Welcome") << endl;  // "emocleW"
    cout << spinWords("to") << endl;  // "to"
    cout << spinWords("CodeWars") << endl;  // "sraWedoC"

    cout << spinWords("Hey fellow warriors") << endl;  // "Hey wollef sroirraw"
    cout << spinWords("Burgers are my favorite fruit") << endl;  // "sregruB are my etirovaf tiurf"
    cout << spinWords("Pizza is the best vegetable") << endl;  // "azziP is the best elbategev"


    return 0;
}
#include <string>
#include <algorithm>
#include <sstream>
std::string spinWords(const std::string &str)
{
    std::stringstream ss(str);
    std::string result;
    std::string buff;
    while (ss >> buff) {
        if (buff.size() >= 5) {
            std::reverse(buff.begin(), buff.end());
        }
        result += buff + ' ';
    }
    result.pop_back();
    return result;
}
