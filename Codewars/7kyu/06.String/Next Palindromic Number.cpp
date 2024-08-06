// https://www.codewars.com/kata/56a6ce697c05fb4667000029/train/cpp
#include <iostream>
using namespace std;

bool isPalindrome(const std::string &str) {
    // Iterate from both ends of the string
    for (size_t i = 0, j = str.length() - 1; i < j; ++i, --j) {
        // Compare characters after converting to lowercase
        if (std::tolower(str[i]) != std::tolower(str[j])) {
            return false; // Not a palindrome
        }
    }

    return true; // Palindrome
}

unsigned int nextPal(const unsigned int val) {
    unsigned int num=val;
    num++;
    while (true)
    {
        std::string temp=to_string(num);
        if (isPalindrome(temp)) return num;
        num++;
    }
    
    return 0;
}

int main() {
    int n=11;
    cout << nextPal(n) << endl;  // 22
    n = 188;
    cout << nextPal(n) << endl;  // 191
    n = 191;
    cout << nextPal(n) << endl;  // 202
    n = 2541;
    cout << nextPal(n) << endl;  // 2552

    return 0;
}
//
unsigned int nextPal(unsigned int val)
{
	while (true)
	{
		std::string s = std::to_string(++val);
		if (s == std::string(s.rbegin(), s.rend())) break;
	}
	return val;
}
