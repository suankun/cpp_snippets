// https://www.codewars.com/kata/56fe17fcc25bf3e19a000292/train/cpp

// Let us define two sums v(n, p) and u(n, p):


// Task:
// Calculate v(n, p) and u(n, p) with two brute-force functions v1(n, p) and u1(n, p).
// Try v1(n, p) and u1(n, p) for small values of n and p and guess the results of u(n, p) and v(n, p)
// Using 2) write v_eff(n, p) and u_eff(n, p) (or vEff(n, p) and uEff(n, p) or v-eff(n, p) and u-eff(n, p)) to efficiently calculate v and u for bigger values of n and p.
// -- (This third part is not tested in

//  JS, CS, TS, C++, C, PHP, Crystal, Rust, Swift, R, Nim, Fortran, NASM, Haxe, Pascal, Lua since there you don't have big integers to control your guess in part 2. See note below for "Shell").
 
// Examples:
// v1(12, 70) --> 1750
// u1(13, 18) --> 252
// Extra points:-)
// For the mathy ones: find a relation between v(n, p), v(n-1, p) and u(n-1, p) :-)

// Notes
// Erlang, Prolog: only uEff(u_eff) and vEff(v_eff) are tested.

// Factor: only ueff and veff are tested.

// Forth: only ueff and veff are tested with small numbers.

// Shell: only v1(n, p)is tested (use the solution you find for v_eff(n, p).

// If you have found u_eff(n, p) and v_eff(n, p) you can use them to calculate u(n, p) and v(n, p).

// You could see: https://en.wikipedia.org/wiki/Binomial_coefficient for a refresh about binomial coefficients.

#include <cmath>
#include <iostream>

class Disguised2 {
public:
    static long long binomialCoefficient(int n, int k) {
        if (k < 0 || k > n) return 0;
        if (k > n - k) k = n - k;
        long long result = 1;
        for (int i = 0; i < k; i++) {
            result *= (n - i);
            result /= (i + 1);
        }
        return result;
    }

    static long long u1(int n, int p) {
        long long result = 0;
        for (int k = 0; k <= n; k++) {
            long long part = std::pow(-1, k) * p * std::pow(4, n - k);
            int abc = (n * 2) - k + 1;
            result += part * binomialCoefficient(abc, k);
        }
        return result;
    }

    static long long v1(int n, int p) {
        long long result = 0;
        for (int k = 0; k <= n; k++) {
            long long part = std::pow(-1, k) * p * std::pow(4, n - k);
            int abc = (n * 2) - k;
            result += part * binomialCoefficient(abc, k);
        }
        return result;
    }
};
//
class Disguised2 {
public:
    static long long v1(const int n, const int p) {
        return n * p + u1(n, p);
    }

    static long long u1(const int n, const int p) {
        return n * p + p;
    }

};
