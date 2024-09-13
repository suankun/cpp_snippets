// https://www.codewars.com/kata/57356c55867b9b7a60000bd7/train/cpp
#include <iostream>

using namespace std;

// Your task is to create a function that does four basic mathematical operations.

// The function should take three arguments - operation(string/char), value1(number), value2(number).
// The function should return result of numbers after applying the chosen operation.

// Examples(Operator, value1, value2) --> output
// ('+', 4, 7) --> 11
// ('-', 15, 18) --> -3
// ('*', 5, 5) --> 25
// ('/', 49, 7) --> 7

int basicOp(char op, int val1, int val2) {
    int res;
    switch(op) {
        case '+': res = val1+val2; break;
        case '-': res = val1-val2; break;
        case '*': res = val1*val2; break;
        case '/': res = val1/val2; break;
    }
    return res;
}
/// oop solution ///
class BasicOp{
    char op;
    int val1;
    int val2;

public:

    BasicOp(char op, int val1, int val2)
        : op(op), val1(val1), val2(val2) {}

    int add() { return val1 + val2; }
    int sub() { return val1 - val2; }
    int mul() { return val1 * val2; }
    int division () { return val1 / val2; }
    
    int operation (char op) {
        if (op == '+')
            return add();
        else if (op == '-')
            return sub();
        else if (op == '*')
            return mul();

        return division();
    }
};

int basicOp(char op, int val1, int val2) {
    BasicOp bo(op, val1, val2);
    return bo.operation(op);
}

int main() {
    cout << basicOp('+',5,4) << endl;  // 9
    cout << basicOp('-',11,8) << endl;  // 3
    cout << basicOp('*',3,4) << endl;  // 12
    cout << basicOp('/',16,4) << endl;  // 4

    return 0;
}