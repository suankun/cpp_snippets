#include <iostream>
using namespace std;

bool is_square(int n)
{
	for (int i = 0; i <= n / 2; i++) {
		if (i * i == n)
			return true;
	}
 	return false;
}

int main() {
	int num1 = 3; // 0 false
	int num2 = 4; // 1 true
	cout << is_square(num1) << endl;
	cout << is_square(num2) << endl;

    return 0;
}
//
#include<cmath>

bool is_square(int n) {
	if (n < 0)
		return false;
	int square = sqrt(n);
	return square * square == n;
}
//
#include <cmath>

bool is_square(int n)
{
  	return fmod(sqrt(n), 1) == 0;
}
