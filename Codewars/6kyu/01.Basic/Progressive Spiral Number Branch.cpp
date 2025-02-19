// https://www.codewars.com/kata/5a26ca51e1ce0e987b0000ee/train/cpp

// Similar setting of the previous, this time you are called to identify in which "branch" of the spiral a given number will end up.

// Considering a square of numbers disposed as the 25 items in the previous kata, the branch are numbered as it follows:

// 17 16 15 14 13    1 1 1 1 0
// 18 05 04 03 12    2 1 1 0 0
// 19 06 01 02 11 => 2 2 0 0 0
// 20 07 08 09 10    2 2 3 3 0
// 21 22 23 24 25    2 3 3 3 3

// Meaning that, for example, numbers in the 10-13 range will be in branch 0, numbers in the range 14-17 are inside branch 1, all those nice numbers in the 18-21 can call branch 2 their house and finally the 21-25 team all falls under the 3 branch.

// Your function must return the number of the index of each number [1 being a special case you might consider equivalent to being in the first branch, 0], as per examples:

// branch(1) == 0 //kind of special case here
// branch(5) == 1
// branch(25) == 3
// branch(30) == 0
// branch(50) == 0

// It might help A LOT to both solve the previous kata and to visualize the diagonals of the square. Be ready for big numbers and, as usual, inspired by AoC. Finally, when ready, go to compute the distance of the series.

#include <cmath>

int branch(int n) {
    if (n == 1)
        return 0;
    
    int layer = 0;
    while ((2 * layer + 1) * (2 * layer + 1) < n)
        layer++;
    
    int max_value = (2 * layer + 1) * (2 * layer + 1);
    int min_value = (2 * (layer - 1) + 1) * (2 * (layer - 1) + 1) + 1;
    
    if (n < min_value || n > max_value)
        return 0;
    
    int side_length = 2 * layer;
    int position = max_value - n;
    
    if (position < side_length) return 3;
    if (position < 2 * side_length) return 2;
    if (position < 3 * side_length) return 1;
    return 0;
}
//
#include <cmath>
int branch(int n)
{
    int lay = ceil(sqrt(n)) / 2;
    return n > 1 ? (n - std::pow(2 * lay - 1, 2) - 1) / (2 * lay) : 0;
}
