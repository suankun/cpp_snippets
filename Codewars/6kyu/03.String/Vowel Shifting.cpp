// https://www.codewars.com/kata/577e277c9fb2a5511c00001d/train/cpp

// You get a text and have to shift the vowels by n positions to the right. (Negative value for n should shift to the left.)

// Position means the vowel's position if taken as one item in a list of all vowels within the string.

// A shift by 1 would mean, that every vowel shifts to the place of the next vowel.

// Shifting over the edges of the text should continue at the other edge.

// Vowels are "aeiou" / "AEIOU".

// If text is null or empty, then simply return back the original text.

// Example:
// text = "This is a test!"
// n = 1
// output = "Thes is i tast!"

// text = "This is a test!"
// n = 3
// output = "This as e tist!"

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <unordered_set>
#include <algorithm>    
using namespace std;

std::string vowelShift(std::string text, int n) {
    static const std::unordered_set<char> vowels = {'A', 'O', 'U', 'E', 'I', 'a', 'o', 'u', 'e', 'i'};
    std::deque<char> curVowels;
    std::vector<int> vowelIndexes;

    // Extract vowels and indexes
    for (size_t i = 0; i < text.length(); i++)
        if (vowels.count(text[i])) {
            curVowels.push_back(text[i]);
            vowelIndexes.push_back(i);
        }

    if (curVowels.empty())
        return text;

    // Shifting
    n = n % curVowels.size();
    if (n != 0)
        std::rotate(curVowels.rbegin(), curVowels.rbegin() + n, curVowels.rend());

    // Place back shifted vowels
    for (size_t i = 0; i < vowelIndexes.size(); i++)
        text[vowelIndexes[i]] = curVowels[i];

    return text;
}

int main() {

    cout << vowelShift("This is a test!", 0) << endl;  // "This is a test!"
    cout << vowelShift("This is a test!", 1) << endl;  // "Thes is i tast!"
    cout << vowelShift("This is a test!", 3) << endl;  // "This as e tist!"

    return 0;
}
//
std::string vowelShift(std::string text, int n)
{
    std::vector<char> vowels = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
    std::vector<std::pair<int,char>> pos;
    
    for(int i=0 ; i<text.size() ; i++ )
        if( std::find(vowels.begin(), vowels.end(), text[i]) != vowels.end() )
            pos.push_back(std::pair<int,char>(i, text[i]));

    for( int i=0 ; i<pos.size() ; i++ )
        text[pos[(i+n)%pos.size()].first] = pos[i].second;  

    return text;
}
