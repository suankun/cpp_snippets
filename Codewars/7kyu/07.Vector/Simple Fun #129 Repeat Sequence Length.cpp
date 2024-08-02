// https://www.codewars.com/kata/58a3f57ecebc06bfcb00009c/train/cpp
#include <unordered_set>
#include <vector>

int sum_of_squares_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

int repeat_sequence_len(int a0) {
    std::unordered_set<int> seen;
    std::vector<int> sequence;

    int current = a0;
    while (seen.find(current) == seen.end()) {
        seen.insert(current);
        sequence.push_back(current);
        current = sum_of_squares_of_digits(current);
    }

    // Find the first occurrence of the repeated element to determine the cycle length
    int cycle_start = current;
    int cycle_length = 0;
    bool counting = false;

    for (int num : sequence) {
        if (num == cycle_start) {
            counting = true;
        }
        if (counting) {
            cycle_length++;
        }
    }

    return cycle_length;
}
//
#include <cmath>
int repeat_sequence_len( int a ) {
    do { int sum{};
        do sum += pow( a % 10, 2 );
        while ( a /= 10 );
        if ( sum == 1 ) return 1;
        a = sum;
    } while ( a > 9 );
    return 8;
}
//
#include <vector>
int repeat_sequence_len(int a0)
{
	int res = 0;
	std::vector<int> digits;
	std::vector<int> results;

	while (res >= 0)
	{
		//split number into digits
		for (a0 = a0; a0 > 0; a0 /= 10) digits.push_back(a0 % 10);

		//sum up the square of digits
		a0 = 0;
		for (size_t i = 0; i < digits.size(); i++)
		{
			a0 += digits[i] * digits[i];
		}
		digits.clear();

		//check if the result already existed
		for (size_t i = 0; i < results.size(); i++)
		{
			if (a0 == results[i]) return results.size() - i;
		}
		results.push_back(a0);
	}
	return res;
}
