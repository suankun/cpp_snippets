// https://www.codewars.com/kata/59b7571bbf10a48c75000070/train/cpp

// Write a function that accepts msg string and returns local tops of string from the highest to the lowest.
// The string's tops are from displaying the string in the below way:

//                                                       3
//                               p                     2   4
//             g               o   q                 1
//   b       f   h           n       r             z
// a   c   e       i       m          s          y
//       d           j   l             t       x
//                     k                 u   w
//                                         v
// The next top is always 1 character higher than the previous one. For the above example, the solution for the abcdefghijklmnopqrstuvwxyz1234 input string is 3pgb.

// When the msg string is empty, return an empty string.
// The input strings may be very long. Make sure your solution has good performance.
// Check the test cases for more samples.

// Note
// Do not post an issue in my solution without checking if your returned string doesn't have some invisible characters. You read most probably outside of msg string.

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string tops(const string& msg)
{
    std::string str = "";
    for (size_t i = 1, j = 2; i < msg.length(); i += j * 2 + 1, j += 2) {
        str += msg[i];
    }
    std::reverse(str.begin(), str.end());
  
    return str;
}

int main() {
    std::string msg = "abcdefghijklmnopqrstuvwxyz12345";
    std::cout << tops(msg) << std::endl; // Test the function
    return 0;
}
