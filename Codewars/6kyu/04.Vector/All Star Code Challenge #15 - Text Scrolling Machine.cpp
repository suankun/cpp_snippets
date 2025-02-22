// https://www.codewars.com/kata/586560a639c5ab3a260000f3/train/cpp

// Your family runs a shop and have just brought a Scrolling Text Machine (http://3.imimg.com/data3/RP/IP/MY-2369478/l-e-d-multicolour-text-board-250x250.jpg) to help get some more business.

// The scroller works by replacing the current text string with a similar text string, but with the first letter shifted to the end; this simulates movement.

// Your father is far too busy with the business to worry about such details, so, naturally, he's making you come up with the text strings.

// Create a function that accepts a string argument and returns an array of strings with each letter from the input string being rotated to the end.

// Examples:
// "Hello" --> ["elloH", "lloHe", "loHel", "oHell", "Hello"]
// Note:
// The original string should be included in the output array.

// The order matters. Each element of the output array should be the rotated version of the previous element.

// The output array SHOULD be the same length as the input string.

// The function should return an empty array with an empty string ('') as input.

#include <iostream>
#include <string>
#include <vector>

using namespace std;
using List = std::vector<std::string>;


std::vector<std::string> rotate(const std::string& s) {
    std::vector<std::string> res;
    std::string strCpy = s;

    if (s.length() == 0)
        return res;

    if (s.length() == 1) {
        res.push_back(s);
        return res; 
    }

    for (size_t i = 0; i < strCpy.length(); i++) {

        char lastCh = strCpy[0];
        strCpy.erase(0, 1);
        strCpy += lastCh;
        
        res.push_back(strCpy);
    }

    return res;
}

void print(List & v) {
    for (string word : v)
        cout << word << ' ';
    cout << endl;
}

int main() {
    List vec;
    
    vec = rotate("hello"); print(vec);
    // {"elloh", "llohe", "lohel", "ohell", "hello"}

    vec = rotate(" "); print(vec);
    // {" "}

    vec = rotate(""); print(vec);
    // {}

    return 0;
}
//
#include <string>
#include <vector>

std::vector<std::string> rotate(const std::string& s) {
    std::vector<std::string> arr;
    
    for(int i = 0; i < s.size(); i++)
        arr.push_back(s.substr(i + 1, s.size()) + s.substr(0, i + 1));

    return arr;
}