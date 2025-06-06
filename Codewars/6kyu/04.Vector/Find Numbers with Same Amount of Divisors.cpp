// https://www.codewars.com/kata/55f1614853ddee8bd4000014/train/cpp

// The integers 14 and 15, are contiguous (1 the difference between them, obvious) and have the same number of divisors.

// 14 ----> 1, 2, 7, 14 (4 divisors)
// 15 ----> 1, 3, 5, 15 (4 divisors)
// The next pair of contiguous integers with this property is 21 and 22.

// 21 -----> 1, 3, 7, 21 (4 divisors)
// 22 -----> 1, 2, 11, 22 (4 divisors)
// We have 8 pairs of integers below 50 having this property, they are:

// [[2, 3], [14, 15], [21, 22], [26, 27], [33, 34], [34, 35], [38, 39], [44, 45]]
// Let's see now the integers that have a difference of 3 between them. There are seven pairs below 100:

// [[2, 5], [35, 38], [55, 58], [62, 65], [74, 77], [82, 85], [91, 94]]
// Let's name, diff, the difference between two integers, next and prev, (diff = next - prev) and nMax, an upper bound of the range.

// We need a special function, count_pairsInt(), that receives two arguments, diff and nMax and outputs the amount of pairs of integers that fulfill this property, all of them being smaller (not smaller or equal) than nMax.

// Let's see it more clearly with examples.

// count_pairsInt(1, 50) -----> 8 (See case above)
// count_pairsInt(3, 100) -----> 7 (See case above)

#include <iostream>
#include <vector>

unsigned int getDivisorsCount(unsigned int n) {
    unsigned int count = 0;
    for (unsigned int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count += (i == n / i) ? 1 : 2;
        }
    }
    return count;
}

unsigned int countDivisors(const unsigned int diff, const unsigned int nMax) {
    unsigned int count = 0;
    std::vector<unsigned int> divisors(nMax, 0);
    
    for (unsigned int i = 1; i < nMax; i++) {
        divisors[i] = getDivisorsCount(i);
    }
    
    for (unsigned int i = 1; i + diff < nMax; i++) {
        if (divisors[i] == divisors[i + diff]) {
            count++;
        }
    }
    
    return count;
}

int main() {
    std::cout << countDivisors(13, 8759) << std::endl;
    return 0;
}
//
#include <cmath>
unsigned int countDivisors(const unsigned int diff, const unsigned int nMax) {
    auto divideCount = [](int num) {
        int count{};
        for (int i = 1; i <= sqrt(num); i++) {
            count += (num % i == 0) ? ((num / i == i) ? 1 : 2) : 0;
        }
        return count;
    };

    int count{};
    for (int i = 0; i < nMax - diff; i++) {
        if (divideCount(i) == divideCount(i + diff)) count++;
    }
    return count;
}
