// https://www.codewars.com/kata/56b5afb4ed1f6d5fb0000991/train/cpp

// The input is a string str of digits. Cut the string into chunks (a chunk here is a substring of the initial string) of size sz (ignore the last chunk if its size is less than sz).

// If the sum of a chunk's digits is divisible by 2, reverse that chunk; otherwise rotate it to the left by one position. Put together these modified chunks and return the result as a string.

// If

// sz is <= 0 or if str == "" return ""
// sz is greater (>) than the length of str it is impossible to take a chunk of size sz hence return "".
// Examples:
// ("123456987654", 6) --> "234561876549"
// ("123456987653", 6) --> "234561356789"
// ("66443875", 4) --> "44668753"
// ("66443875", 8) --> "64438756"
// ("664438769", 8) --> "67834466"
// ("123456779", 8) --> "23456771"
// ("", 8) --> ""
// ("123456779", 0) --> "" 
// ("563000655734469485", 4) --> "0365065073456944"
// Example of a string rotated to the left by one position:
// s = "123456" gives "234561".

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class RevRot
{
public:
    static std::string revRot(const std::string &strng, unsigned int sz);
    static void rot(std::string & str);
    static int sum(std::string & str);
};

void RevRot::rot(std::string & str) {
    char firstCh = str[0];
    str.erase(0, 1);
    str += firstCh;
}

int RevRot::sum(std::string & str) {
    int s = 0;
    for (char & ch : str)
        s += ch - '0';

    return s;
}

std::string RevRot::revRot(const std::string &strng, unsigned int sz) {
    if (sz <= 0 || strng.length() == 0 || sz > strng.length())
        return "";

    std::string strCopy = strng;
    std::string res;

    for (size_t idx = 0; idx <= strCopy.length(); idx += sz) {
        if (idx > strCopy.length() - sz)
            break;

        std::string chunk = strCopy.substr(idx, sz);

        if (sum(chunk) % 2 == 0)
            reverse(chunk.begin(), chunk.end());
        else
            rot(chunk);
        
        res += chunk;
    }

    return res;
}

int main() {
    RevRot r;

    // std::cout << r.revRot("123456987654", 6) << std::endl;  // "234561876549"
    // std::cout << r.revRot("66443875", 4) << std::endl;      // "44668753"
    std::cout << r.revRot("733049910872815764", 5) << std::endl;      // "330479108928157"

    return 0;
}
