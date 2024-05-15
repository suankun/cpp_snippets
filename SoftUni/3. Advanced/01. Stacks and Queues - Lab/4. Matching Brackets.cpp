#include <iostream>
#include <stack>
#include <string>
using namespace std;

void printExpr(stack<size_t>& openBrackets, string& line, size_t& idx) {
    int begin = openBrackets.top();
    openBrackets.pop();
    int end   = idx - begin + 1;
    cout << line.substr(begin, end) << endl;
}

int main() {
    string line;
    getline(cin, line);

    stack<size_t> openBrackets;

    for (size_t i = 0; i < line.length(); i++) {
        if (line[i] == '(')
            openBrackets.push(i);
        else if (line[i] == ')')
            printExpr(openBrackets, line, i);
    }

    return 0;
}
