// https://www.codewars.com/kata/56c2acc8c44a3ad6e400050a/train/cpp
#include <iostream>
using namespace std;

int countZero(std::string s)
{
    std::string zeros = "abdegopq069DOPQR";
    std::string twoZeros = "%&B8";
    int count = 0, len = s.length();
    for (int i=0; i<len; i++) {
        if (s[i]=='(' && i<len) {
            if (s[i+1]==')') count++;
        }
        else if (zeros.find(s[i]) != std::string::npos) count++;
        else if (twoZeros.find(s[i]) != std::string::npos) count+=2;
    }

    return count;
}

int main() {
    cout << countZero("") << endl;  // 0
    cout << countZero("0") << endl;  // 1
    cout << countZero("()") << endl;  // 1
    cout << countZero("O()()") << endl;  // 3
    cout << countZero("1234567890") << endl;  // 5
    cout << countZero("abcdefghijklmnopqrstuvwxyz") << endl;  // 8

    return 0;
}
