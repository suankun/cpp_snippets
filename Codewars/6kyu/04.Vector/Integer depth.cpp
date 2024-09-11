// https://www.codewars.com/kata/59b401e24f98a813f9000026/train/cpp
#include <iostream>
#include <vector>
using namespace std;

unsigned integer_depth(unsigned n) {
    std::vector<int> digits;
    int mult {1};
    while (digits.size()<10) {
        int temp_num = n*mult;
        while (temp_num>0) {
            int temp_digit = temp_num%10;
            size_t i {};
            for (i=0; i<digits.size(); i++) {
                if (digits[i] == temp_digit) break;
            }
            if (i==digits.size()) digits.push_back(temp_digit);
            temp_num/=10;
        }
        mult++;
    }

    return mult-1;
}

int main()
{
    cout << integer_depth(42);  // 9

    return 0;
}
////////
#include <unordered_set>
#include <string>
unsigned integer_depth(unsigned n) {
 std::unordered_set<char> digits;
    int i = 1;
    while (digits.size() < 10) {
        int multiple = n * i;
        std::string str = std::to_string(multiple);
        for (char c : str) {
            digits.insert(c);
        }
        i++;
    }
    return i - 1;
}
