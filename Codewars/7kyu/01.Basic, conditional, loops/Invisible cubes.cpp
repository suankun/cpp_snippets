// https://www.codewars.com/kata/560d6ebe7a8c737c52000084/train/cpp
unsigned long long notVisibleCubes(unsigned int n) {
    return n > 3 ? static_cast<unsigned long long>(n - 2) * (n - 2) * (n - 2) : n == 3 ? 1 : 0;
}
//
#include <cmath>

unsigned long long notVisibleCubes(unsigned long long n)
{
	return n < 3 ? 0 : (n - 2) * (n - 2) * (n - 2);
}
