// https://www.codewars.com/kata/55ffb44050558fdb200000a4/train/cpp

// We have the first value of a certain sequence, we'll name it init_val (or initVal) (≤ 30,000).

// We also define a pattern list, pattern_l (patternL), which consists of a repeating cycle of differences between consecutive terms in the sequence. The list has a maximum length of 6 values, and each value in the list is ≤ 55.

// The sequence is constructed as follows:

// First term: init_val
// Second term: term2 = term1 + pattern_l[0]
// Third term: term3 = term2 + pattern_l[1]
// Fourth term: term4 = term3 + pattern_l[2]
// …
// Once all elements of pattern_l are used, we cycle back to the first element and continue the pattern indefinitely.
// Example Sequence Construction:
// For

// init_val = 10
// pattern_l = [2, 1, 3]
// The sequence will be:

// term1 = 10  
// term2 = 12  (10 + 2)  
// term3 = 13  (12 + 1)  
// term4 = 16  (13 + 3)  
// term5 = 18  (16 + 2)  
// term6 = 19  (18 + 1)  
// term7 = 22  (19 + 3)  
// term8 = 24  (22 + 2)  
// ...
// This pattern continues indefinitely.

// We can easily obtain the next terms of the sequence following the values in the pattern list. We see that the sixth term of the sequence, 19, has the sum of its digits 10.

// Make a function that receives three arguments in this order:

// init_val (initVal) is the starting number;
// pattern_l (patternL) is the list of repeating differences;
// nth_term (nthTerm) is the ordinal position of the term in the sequence (≤ 1,500,000).
// The function should return the sum of the digits of the nth_term in the sequence.

// Example Cases:
// sum_dig_nth_term(10, [2, 1, 3], 6) → 10  
// # 6th term = 19 → sum of digits = 1 + 9 = 10  

// sum_dig_nth_term(10, [1, 2, 3], 15) → 10  
// # 15th term = 37 → sum of digits = 3 + 7 = 10  

#include <vector>
#include <numeric>

int sumDigNthTerm(int initval, const std::vector<int>& patternl, int nthterm) {
    if (patternl.empty()) return 0;
    
    nthterm--;
    int cycle_sum = std::accumulate(patternl.begin(), patternl.end(), 0);
    int cycles = nthterm / patternl.size();
    int remainder = nthterm % patternl.size();
    
    int a = std::accumulate(patternl.begin(), patternl.begin() + remainder, 0);
    int b = cycles * cycle_sum;
    int term = initval + a + b;
    
    int sum_digits = 0;
    while (term > 0) {
        sum_digits += term % 10;
        term /= 10;
    }
    
    return sum_digits;
}
