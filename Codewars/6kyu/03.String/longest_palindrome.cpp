// https://www.codewars.com/kata/54bb6f887e5a80180900046b/train/cpp

// Find the length of the longest substring in the given string s that is the same in reverse.

// As an example, if the input was “I like racecars that go fast”, the substring (racecar) length would be 7.

// If the length of the input string is 0, the return value must be 0.

// Example:
// "a" -> 1 
// "aab" -> 2  
// "abcde" -> 1
// "zzbaabcd" -> 4
// "" -> 0

#include <string>
#include <algorithm>

bool is_palindrome(const std::string &s) {
    std::string rev = s;
    std::reverse(rev.begin(), rev.end());
    
    return s == rev;
}

int longest_palindrome(const std::string &s) {
    int longest = 0;
    int length = s.length();

    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j <= length; j++) {
            std::string sub = s.substr(i, j - i);

            if (is_palindrome(sub) && sub.length() > longest)
                longest = sub.length();
        }
    }
  
    return longest;
}
