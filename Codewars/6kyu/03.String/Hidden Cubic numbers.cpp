// https://www.codewars.com/kata/55031bba8cba40ada90011c4/train/cpp

// We search non-negative integer numbers, with at most 3 digits, such as the sum of the cubes of their digits is the number itself; we will call them "cubic" numbers.

// 153 is such a "cubic" number : 1^3 + 5^3 + 3^3 = 153
// These "cubic" numbers of at most 3 digits are easy to find, even by hand, so they are "hidden" with other numbers and characters in a string.

// The task is to find, or not, the "cubic" numbers in the string and then to make the sum of these "cubic" numbers found in the string, if any, and to return a string such as:

// "number1 number2 (and so on if necessary) sumOfCubicNumbers Lucky" 
// if "cubic" numbers number1, number2, ... were found.

// The numbers in the output are to be in the order in which they are encountered in the input string.

// If no cubic numbers are found return the string: `"Unlucky"``.

// Examples:
//  - s = "aqdf&0#1xyz!22[153(777.777" 
//    the groups of at most 3 digits are 0 and 1 (one digit), 22 (two digits), 153, 777, 777 (3 digits)
//    Only 0, 1, 153 are cubic and their sum is 154
//    Return: "0 1 153 154 Lucky"

// - s = "QK29a45[&erui9026315"
//   the groups are 29, 45, 902, 631, 5. None is cubic.
//   Return: "Unlucky"

// Notes
// In the string "001234" where 3 digits or more follow each other the first group to examine is "001" and the following is "234". If a packet of at most three digits has been taken, whether or not "cubic", it's over for that packet.

// When a continuous string of digits exceeds 3, the string is split into groups of 3 from the left. The last grouping could have 3, 2 or 1 digits.

// e.g "24172410" becomes 3 strings comprising "241", "724" and "10"

// e.g "0785" becomes 2 strings comprising "078" and "5".

#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>
#include <string>

using namespace std;

class Cubes
{
public:
    static void numberSeparator(std::string& num, std::vector<std::string>& nums) {
        std::string formattedNum;
        int count = 0;

        for (size_t i = 0; i < num.size(); i++) {
            formattedNum += num[i];
            count++;

            if (count == 3 || i == num.size() - 1) {
                if (formattedNum != "000")
                    nums.push_back(formattedNum);
                else
                    nums.push_back("0");

                formattedNum = "";
                count = 0;
            }
        }
    }

    static std::string isSumOfCubes(std::string& str) {
        for (char& c : str)
            if (!isdigit(c))
                c = ' ';

        std::vector<std::string> nums;
        std::istringstream istr(str);
        std::string buf;
        while (istr >> buf) {
            if (buf.length() <= 3)
                nums.push_back(buf == "000" ? "0" : buf);
            else
                numberSeparator(buf, nums);
        }

        std::string res;
        int totalSum = 0;
        for (std::string s : nums) {
            int sum = 0;
            for (size_t i = 0; i < s.length(); i++) {
                int curNum = pow(s[i] - '0', 3);
                sum += curNum;
            }

            if (sum == std::stoi(s)) {
                res += s + " ";
                totalSum += sum;
            }
        }

        if (!res.empty()) {
            res.pop_back();
            res += " " + std::to_string(totalSum) + " Lucky";
        } else {
            res = "Unlucky";
        }

        return res;
    }
};

int main() {
    Cubes c;

    std::string str = "&z _upon 407298a --- ???ry, ww/100 I thought, 631str*ng and w===y -721&()";
    cout << c.isSumOfCubes(str) << endl;  // "407 407 Lucky"

    // str = "0 9026315 -827&()";
    // cout << c.isSumOfCubes(str) << endl;  //  "0 0 Lucky"

    return 0;
}
