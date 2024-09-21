// https://www.codewars.com/kata/56bdd0aec5dc03d7780010a5/train/cpp
#include <iostream>

using namespace std;

int countOnes(int n)
{
    int cntOnes = 0;
    int binaryNum[32];

    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int n : binaryNum)
        if (n == 1)
            cntOnes++;

    return cntOnes;
}

int nextHigher(int value)
{
    int check = countOnes(value);
    int nextHigherValue = value + 1;
    int nextHigherValueOnes = 0;

    while (check != nextHigherValueOnes)
        nextHigherValueOnes = countOnes(nextHigherValue++);
    
    return --nextHigherValue;
}

int main() {
    cout << nextHigher(128) << endl;  // 256

    return 0;
}
// 
int count(int k)
{
	int r = 0;

	while (k != 0)
	{
		if (k % 2 == 1)
			r++;

		k /= 2;
	}

	return r;
}

int nextHigher(int value)
{
	int expected = count(value);

	value++;

	while (expected != count(value))
		value++;

	return value;
}
//
#include <bitset>  
#include <limits> 
using namespace std;
int nextHigher(int value)
{    
    std::bitset<std::numeric_limits<int>::digits> first(value);
	while (true)
	{
		value++;
		std::bitset<std::numeric_limits<int>::digits> second(value);
		if (first.count() == second.count())
		{
			return value;
		}
	}
}
