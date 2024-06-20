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
