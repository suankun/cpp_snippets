// https://www.codewars.com/kata/5ca24526b534ce0018a137b5/train/cpp
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string send_message(const string& m) {
    unordered_map<char, string> letters = {
        {'0', "0-"}, {'1', "1-"}, {'2', "2-"}, {'3', "3-"}, {'4', "4-"}, {'5', "5-"},
        {'6', "6-"}, {'7', "7-"}, {'8', "8-"}, {'9', "9-"}, {' ', "0"},
        {'.', "1"}, {',', "11"}, {'?', "111"}, {'!', "1111"}, {'\'', "*"}, {'-', "**"},
        {'+', "***"}, {'=', "****"}, {'*', "*-"}, {'#', "#-"},
        {'A', "2"}, {'B', "22"}, {'C', "222"}, {'D', "3"}, {'E', "33"}, {'F', "333"},
        {'G', "4"}, {'H', "44"}, {'I', "444"}, {'J', "5"}, {'K', "55"}, {'L', "555"},
        {'M', "6"}, {'N', "66"}, {'O', "666"}, {'P', "7"}, {'Q', "77"}, {'R', "777"},
        {'S', "7777"}, {'T', "8"}, {'U', "88"}, {'V', "888"}, {'W', "9"}, {'X', "99"},
        {'Y', "999"}, {'Z', "9999"}, {'a', "2"}, {'b', "22"}, {'c', "222"}, {'d', "3"},
        {'e', "33"}, {'f', "333"}, {'g', "4"}, {'h', "44"}, {'i', "444"}, {'j', "5"},
        {'k', "55"}, {'l', "555"}, {'m', "6"}, {'n', "66"}, {'o', "666"}, {'p', "7"},
        {'q', "77"}, {'r', "777"}, {'s', "7777"}, {'t', "8"}, {'u', "88"}, {'v', "888"},
        {'w', "9"}, {'x', "99"}, {'y', "999"}, {'z', "9999"}
    };

    string result = "";
    int caseTrigger = 0; // 0 = lowercase, 1 = uppercase
    char prevChar = '\0';

    for (size_t i = 0; i < m.size(); ++i) {
        char currentChar = m[i];
        string currentKey = "";

        if (isalpha(currentChar)) {
            if (islower(currentChar) && caseTrigger == 0) {
                currentKey = letters[currentChar];
            } else if (islower(currentChar) && caseTrigger == 1) {
                caseTrigger = 0;
                currentKey = "#" + letters[currentChar];
            } else if (isupper(currentChar) && caseTrigger == 1) {
                currentKey = letters[currentChar];
            } else if (isupper(currentChar) && caseTrigger == 0) {
                caseTrigger = 1;
                currentKey = "#" + letters[currentChar];
            }
        }
        else {
            currentKey = letters[currentChar];
        }

        if (!result.empty() && result.back() == currentKey[0] && prevChar != '#') {
            result += ' ';
        }

        result += currentKey;
        prevChar = currentChar;
    }

    return result;
}

int main() {
    std::string input; std::string expected;
    input = "hey";
    expected = "4433999";
    cout << "Result  : " << send_message(input) << endl << "Expected: " << expected << endl;
    
    // input = "one two three";
    // expected = "666 6633089666084477733 33";
    // cout << "Result  : " << send_message(input) << endl << "Expected: " << expected << endl;
    
    // input = "Hello World!";
    // expected = "#44#33555 5556660#9#66677755531111";
    // cout << "Result  : " << send_message(input) << endl << "Expected: " << expected << endl;
    
    // input = "Def Con 1!";
    // expected = "#3#33 3330#222#666 6601-1111";
    // cout << "Result  : " << send_message(input) << endl << "Expected: " << expected << endl;
    
    // input = "A-z";
    // expected = "#2**#9999";
    // cout << "Result  : " << send_message(input) << endl << "Expected: " << expected << endl;
    
    // input = "1984";
    // expected = "1-9-8-4-";
    // cout << "Result  : " << send_message(input) << endl << "Expected: " << expected << endl;
    
    // input = "Big thanks for checking out my kata";
    // expected = "#22#444 4084426655777703336667770222443322255444664066688 806999055282";
    // cout << "Result  : " << send_message(input) << endl << "Expected: " << expected << endl;

    return 0;
}
//
#include <string>
#include <map>

using namespace std;

string send_message(const string& message)
{
    map<char, string> change {
        {'1', "1-"}, {'.', "1"},  {',', "11"},  {'?', "111"}, {'!', "1111"},
        {'2', "2-"}, {'a', "2"}, {'b', "22"}, {'c', "222"},
        {'3', "3-"}, {'d', "3"}, {'e', "33"}, {'f', "333"}, 
        {'4', "4-"}, {'g', "4"}, {'h', "44"}, {'i', "444"},
        {'5', "5-"}, {'j', "5"}, {'k', "55"}, {'l', "555"},
        {'6', "6-"}, {'m', "6"}, {'n', "66"}, {'o', "666"},
        {'7', "7-"}, {'p', "7"}, {'q', "77"}, {'r', "777"}, {'s', "7777"},
        {'8', "8-"}, {'t', "8"}, {'u', "88"}, {'v', "888"},
        {'9', "9-"}, {'w', "9"}, {'x', "99"}, {'y', "999"}, {'z', "9999"},
        {'*', "*-"}, {'\'', "*"}, {'-', "**"}, {'+', "***"}, {'=', "****"},
        {'0', "0-"}, {' ', "0"},
        {'#', "#-"}
    };

    string result;
    bool isLower = true;
    for (auto c : message) {
        if (isalpha(c) && (bool(islower(c)) != isLower)) {
        result.push_back('#');
        isLower ^= true;
        }
        auto add = change[tolower(c)];
        if (result.size() > 0 && result.back() == add[0]) result.push_back(' ');
        result.append(add);
    }
    
    return result;
}
