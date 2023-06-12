// https://www.codewars.com/kata/57356c55867b9b7a60000bd7/train/cpp
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