#include <iostream>
using namespace std;

int get_sum(int a, int b)
{
  if (a == b) return a; // return one of the int if they are equal
  // determine min and max
  int min {}, max {};
  if (a > b) {
    min = b;
    max = a;
  } else {
    min = a;
    max = b;
  }
  // sum all int in the interval
  int sum {};
  for (int i {min}; i <= max; i++) {
    sum += i;
  }
  return sum;
}

int main() {
    int a {-1}, b {5};
    int result = get_sum(a, b);
    cout << result << endl;

    return 0;
}

/////////////////////////////////////////////////////
int get_sum(int a, int b)
{
  int n = (a < b ? b - a : a - b) + 1;
  return n *(a + b)/ 2;
}