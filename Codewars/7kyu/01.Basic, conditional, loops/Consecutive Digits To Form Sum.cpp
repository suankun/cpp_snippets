// https://www.codewars.com/kata/5dae2599a8f7d90025d2f15f/train/cpp
#include <cmath>
using namespace std; 

bool consecutiveDucks (unsigned int num)
{
    return (num & (num - 1)) != 0;
}
// If a number is a power of 2, it has only one bit set in its binary representation (e.g., 4 = 100, 8 = 1000, etc.).
// When you subtract 1 from a power of 2, you get a number where all bits lower than the highest bit are set (e.g., 3 = 011, 7 = 111).
// Performing a bitwise AND operation (&) between a power of 2 and one less than it will always result in 0 if the number is a power of 2.
// Therefore, the function returns true if the number is not a power of 2, indicating it can be represented as the sum of consecutive numbers, and false otherwise.
//
