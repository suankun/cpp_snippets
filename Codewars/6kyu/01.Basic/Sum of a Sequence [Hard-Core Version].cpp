// https://www.codewars.com/kata/587a88a208236efe8500008b/train/cpp

// The task is simple to explain: simply sum all the numbers from the first parameter being the beginning to the second parameter being the upper limit (possibly included), going in steps expressed by the third parameter:

// sequenceSum(2,2,2) === 2
// sequenceSum(2,6,2) === 12 // 2 + 4 + 6
// sequenceSum(1,5,1) === 15 // 1 + 2 + 3 + 4 + 5
// sequenceSum(1,5,3) === 5 // 1 + 4
// If it is an impossible sequence (with the beginning being larger the end and a positive step or the other way around), just return 0. See the provided test cases for further examples :)

// Note: differing from the other base kata, much larger ranges are going to be tested, so you should hope to get your algo optimized and to avoid brute-forcing your way through the solution.

#include <iostream>

long long int sequence_sum(long long int begin_number, long long int end_number, long long step) {
    if ((step > 0 && begin_number > end_number) || (step < 0 && begin_number < end_number)) {
        return 0;
    }
    
    long long int last_term = begin_number + ( (end_number - begin_number) / step ) * step;
    
    long long int n = ((last_term - begin_number) / step) + 1;
    
    // Arithmetic series: S_n = n/2 * (first_term + last_term)
    return (n * (begin_number + last_term)) / 2;
}

int main() {
    // cout << sequence_sum(2, 6, 2) << endl;  // 12 (2 + 4 + 6)
    std::cout << sequence_sum(-1, -5, -3) << std::endl;  // -5 (-1 -4)

    return 0;
}
