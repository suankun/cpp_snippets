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
#include <cmath>
using namespace std; 

bool consecutiveDucks (unsigned int num)
{

/* All odd numbers (num) can be expressed by a sum of consecutive integegers.
    Examples: num = 15 ----> (15 / 2 = 7)  + (16 / 2 = 8) = 15 
            num = 23 ----> (23 / 2 = 11) + (24 / 2 = 12) = 23
            
That's why we only need to test for even numbers:
      
    When an even number cannot be further divided by 2,
    meaning the result of the division by 2 is an odd number,
    then it can also be expressed by a sum of consecutive integegers.
    
    Examples: num = 14 ---> 14 / 2 = 7 (Seven is an odd number)
                    14 = 2 + 3 + 4 + 5
                      
Only when a number is a multiple of 2
it cannot be expressed by a sum of consecutive integegers.
      
    Examples: num = 8 ----> 2*2*2 = 8
            8 != 4+5
            8 != 2+3+4
            8 != 3+4
            8 != 1+2+3
*/

if(num % 2 == 0) { // testing if it's an even number. If it's an odd number we will skip the if loop and return true.
    while(num > 1) { // while the number is greater than 1 we want to check if a division by 2 gives as an odd number.
        if(num % 2 == 0){ // if it's an even number...
            num /= 2;     // ...then let's divide the number by 2
        }
        else if (num > 1 && num % 2 != 0) // if it's not an even number after division by 2 then return true
        return true;
    } 
    return false; // return false if the while loop ended and the number turned out to be a multiple of 2
}
else
  return true; // returning true because the number is odd.
}
