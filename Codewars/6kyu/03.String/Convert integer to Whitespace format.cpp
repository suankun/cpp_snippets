// https://www.codewars.com/kata/55b350026cc02ac1a7000032/train/cpp

// Story
// Hereinafter, [space] refers to " ", [tab] refers to "\t", and [LF] refers to "\n" for illustrative purposes. This does not mean that you can use these placeholders in your solution.

// In esoteric language called Whitespace, numbers are represented in the following format:

// first character represents the sign: [space] for plus, [tab] for minus;
// characters after that are the binary representation of the absolute value of the number, with [space] for 0, [tab] for 1, the rightmost bit is the least significand bit, and no leading zero bits.
// the binary representation is immediately followed by [LF].
// Notes
// Valid Whitespace number must always have at least two characters: a sign and the terminator. In case there are only two characters, the number is equal to zero.
// For the purposes of this kata, zero must always be represented as [space][LF].
// In Whitespace, only space, tabulation and linefeed are meaningful characters. All other characters are ignored. However, for the purposes of this simple kata, please do not add any other characters in the output.
// In this kata, input will always be a valid negative or positive integer.
// For your convenience, in this kata we will use unbleach() function when evaluating your results. This function replaces whitespace characters with [space], [tab], and [LF] to make fail messages more obvious. You can see how it works in Example Test Cases.
// Examples
// 1 in Whitespace is " \t\n".
// 0 in Whitespace is " \n".
// -1 in Whitespace is "\t\t\n".
// 2 in Whitespace is " \t \n".
// -3 in Whitespace is "\t\t\t\n".

#include <string>
#include <cmath>

std::string whitespace_number(int n)
{
    if (n == 0) return " \n";

    std::string result;

    result += (n > 0) ? ' ' : '\t';

    int abs_n = std::abs(n);
    std::string binary;

    while (abs_n > 0) {
        binary = ((abs_n % 2 == 0) ? '0' : '1') + binary;
        abs_n /= 2;
    }

    for (char c : binary) {
        result += (c == '0') ? ' ' : '\t';
    }

    result += '\n';
    return result;
}
//
#include <string>
#include <bitset>
#include <cmath>

std::string whitespace_number(int n)
{
    std::string s = std::bitset<32>(abs(n)).to_string(), ret = "";
    s.erase(0, s.find('1'));
    ret += (n < 0) ? '\t' : ' ';

    for (auto e : s)
        ret += std::string(1, e == '0' ? ' ' : '\t');
        
    ret += '\n';
    return ret;
}