#include <iostream>
#include <stack>
using namespace std;

bool checkValidParenthesis(stack<char>& par, const char& expected) {
    if (par.size() == 0)
        return false;
    
    if (expected != par.top())
        return false;

    par.pop();
    return true;
}

int main() {
    string line;
    getline(cin, line);

    stack<char> par;

    bool bValid = true;
    string::iterator it = line.begin();
    for (; bValid && it != line.end(); it++) {
        switch (*it)
        {
        case '{':
        case '[':
        case '(':
            par.push(*it);
            break;
        case '}':
            if (!checkValidParenthesis(par, '{'))
                bValid = false;
            break;
        case ']':
            if (!checkValidParenthesis(par, '['))
                bValid = false;
            break;
        case ')':
            if (!checkValidParenthesis(par, '('))
                bValid = false;
            break;
        }
    }

    if (it != line.end())
        bValid = false;

    cout << (bValid ? "YES" : "NO") << endl;
    
    return 0;
}
