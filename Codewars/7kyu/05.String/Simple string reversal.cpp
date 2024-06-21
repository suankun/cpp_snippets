// https://www.codewars.com/kata/5a71939d373c2e634200008e/train/cpp
#include <iostream>
#include <string>

using namespace std;

std::string solve(string s){
    std::string reversed_str = "";
    int len = s.length();
    for (int i {}; i<len; i++) {
        char temp = s[len-i-1];
        if (temp == ' ') continue;
        reversed_str += temp;
    }
    for (int i {}; i<len; i++) {
        char temp = s[i];

        if (temp == ' ') reversed_str.insert(i, " ");
    }

    return reversed_str;
}

int main() {
    cout << solve("your code rocks") << endl;  // "skco redo cruoy"

    return 0;
}
//
std::string solve(std::string s){
    std::string st = "";
    for (int i = s.length()-1; i >= 0; --i){
        if (s[i] != ' ')           st += s[i];
        if (s[st.length()] == ' ') st += s[st.length()];
    }
    return st;
}
