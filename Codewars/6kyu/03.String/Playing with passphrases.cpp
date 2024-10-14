// https://www.codewars.com/kata/559536379512a64472000053/train/cpp
// Everyone knows passphrases. One can choose passphrases from poems, songs, movies names and so on but frequently they can be guessed due to common cultural references. You can get your passphrases stronger by different means. One is the following:

// choose a text in capital letters including or not digits and non alphabetic characters,

// shift each letter by a given number but the transformed letter must be a letter (circular shift),
// replace each digit by its complement to 9,
// keep such as non alphabetic and non digit characters,
// downcase each letter in odd position, upcase each letter in even position (the first character is in position 0),
// reverse the whole result.
// Example:
// your text: "BORN IN 2015!", shift 1

// 1 + 2 + 3 -> "CPSO JO 7984!"

// 4 "CpSo jO 7984!"

// 5 "!4897 Oj oSpC"

// With longer passphrases it's better to have a small and easy program. Would you write it?

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class PlayPass {
public:
    static string playPass(const string &s, int n);
};

string PlayPass::playPass(const string &s, int n) {
    string res;
    res.reserve(s.size());

    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            res += (105 - s[i]);
        } else if (isalpha(s[i])) {
            char x = (s[i] + n - 'A') % 26 + 'A';
            res += i % 2 == 1 ? tolower(x) : x;
        } else
        res += s[i];
    }

    reverse(res.begin(), res.end());
    return res;
}

int main() {
    cout << PlayPass::playPass("I LOVE YOU!!!", 1) << endl;  // "!!!vPz fWpM J"
    cout << PlayPass::playPass("I LOVE YOU!!!", 0) << endl;  // "!!!uOy eVoL I"
    cout << ("AAABBCCY", 1) << endl;  // "zDdCcBbB"
    cout << PlayPass::playPass("MY GRANMA CAME FROM NY ON THE 23RD OF APRIL 2015", 2);
        // "4897 NkTrC Hq fT67 GjV Pq aP OqTh gOcE CoPcTi aO"
    
    return 0;
}
