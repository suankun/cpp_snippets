// https://www.geeksforgeeks.org/stack-set-3-reverse-string-using-stack/
#include <iostream>
#include <stack>

using namespace std;

int main() {
    string str = "abcde";
    stack<char> ch;
    for (int i = 0; i < str.length(); i++) {
        ch.push(str[i]);
    }

    // while (!ch.empty())
    // {
    //     cout << ch.top();
    //     ch.pop();
    // }
    
    for (int i = 0; i < str.length(); i++) {
        str[i] = ch.top();
        ch.pop();
    }

    cout << str << endl;

    return 0;
}
