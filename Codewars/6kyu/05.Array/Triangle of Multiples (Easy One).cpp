// https://www.codewars.com/kata/58ecc0a8342ee5e920000115/train/cpp

// See the following triangle:

// ____________________________________
//  1                                      
//  2   4   2                              
//  3   6   9   6   3                      
//  4   8   12  16  12  8   4             
//  5   10  15  20  25  20  15  10  5   
//  ___________________________________
 
// The total sum of the numbers in the triangle, up to the 5th line included, is 225, part of it, 144, corresponds to the total sum of the even terms and 81 to the total sum of the odd terms.

// Create a function that may output an array (in Haskell, a tuple) with three results for each value of n.

// n  ---->  [total_sum, total_even_sum, total_odd_sum]
// Our example will be:

// 5  ---->  [225, 144, 81]
// Features of the random tests:

// number of tests = 100
// 50 <= n <= 5000

#include <array>

std::array<unsigned long, 3> multTriangle(const unsigned int n) {
    unsigned long total_sum = 0;
    unsigned long total_even_sum = 0;
    unsigned long total_odd_sum = 0;
    
    for (unsigned int i = 1; i <= n; i++) {
        for (unsigned int j = 1; j <= (2 * i - 1); j++) {
            unsigned long value = i * ((j <= i) ? j : (2 * i - j));
            total_sum += value;
            if (value % 2 == 0) {
                total_even_sum += value;
            } else {
                total_odd_sum += value;
            }
        }
    }
    
    return {total_sum, total_even_sum, total_odd_sum};
}
