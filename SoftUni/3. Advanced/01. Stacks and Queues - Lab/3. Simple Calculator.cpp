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
//
#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    stack<int> numbers;
    stack<char> operations;

    istringstream iss(line);

    int num;
    char op;
    while (iss >> num)
    {
        numbers.push(num);

        if (iss >> op)
            operations.push(op);
    }
    
    int sum = 0;
    while (operations.size())
    {
        int num = numbers.top(); numbers.pop();
        char c = operations.top(); operations.pop();
        switch (c)
        {
            case '+': sum += num; break;
            case '-': sum -= num; break;
        }
    }
    
    sum += numbers.top();

    cout << sum << endl;

    return 0;
}
