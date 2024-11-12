// https://www.codewars.com/kata/579ef9607cb1f38113000100/train/cpp

// You are given two positive integers a and b.

// You can perform the following operations on a so as to obtain b :

// (a-1)/2   (if (a-1) is divisible by 2)
// a/2       (if a is divisible by 2)
// a*2
// b will always be a power of 2.

// You are to write a function operation that efficiently returns the minimum number of operations required to transform a into b.

// For example :

// operation(2,8) -> 2
// 2*2 = 4
// 4*2 = 8

// operation(9,2) -> 2
// (9-1)/2 = 4
// 4/2 = 2

// operation(1024,1024) -> 0

#include <cmath>
#include <bitset>

class Transform {
public:
    static int operation(int a, int b) {
        int j = 0;
        
        while (std::bitset<32>(a).count() > 1) {
            a = a >> 1;
            j++;
        }
        
        return std::abs(std::log2(a) - std::log2(b)) + j;
    }
};
//
namespace Transform {

    bool isPowerOf2(unsigned x) {
        return x != 0 && (x & x - 1) == 0;
    }

    unsigned operation(unsigned a, unsigned b) {
        unsigned res = 0;
        while (a > b || !isPowerOf2(a))
            a >>= 1, res++;
        while (a < b)
            a <<= 1, res++;
        return res;
    }

}
