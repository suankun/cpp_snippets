#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    istringstream iss(line);

    stack<int> operands;
    stack<char> operations;

    int number;
    char op;
    while (iss >> number)
    {
        operands.push(number);

        if (iss >> op)
            operations.push(op);
        else
            break;
    }

    int sum = 0;
    while (operations.size())
    {
        int num = operands.top(); operands.pop();
        char c  = operations.top(); operations.pop();

        switch (c)
        {
            case '+': sum += num; break;
            case '-': sum -= num; break;
        }
    }

    sum += operands.top();

    cout << sum << endl;


    return 0;
}
