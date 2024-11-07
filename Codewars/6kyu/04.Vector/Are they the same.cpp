// https://www.codewars.com/kata/550498447451fbbd7600041c/train/cpp

// Given two arrays a and b write a function comp(a, b) (orcompSame(a, b)) that checks whether the two arrays have the "same" elements, with the same multiplicities (the multiplicity of a member is the number of times it appears). "Same" means, here, that the elements in b are the elements in a squared, regardless of the order.

// Examples
// Valid arrays
// a = [121, 144, 19, 161, 19, 144, 19, 11]  
// b = [121, 14641, 20736, 361, 25921, 361, 20736, 361]
// comp(a, b) returns true because in b 121 is the square of 11, 14641 is the square of 121, 20736 the square of 144, 361 the square of 19, 25921 the square of 161, and so on. It gets obvious if we write b's elements in terms of squares:

// a = [121, 144, 19, 161, 19, 144, 19, 11] 
// b = [11*11, 121*121, 144*144, 19*19, 161*161, 19*19, 144*144, 19*19]
// Invalid arrays
// If, for example, we change the first number to something else, comp is not returning true anymore:

// a = [121, 144, 19, 161, 19, 144, 19, 11]  
// b = [132, 14641, 20736, 361, 25921, 361, 20736, 361]
// comp(a,b) returns false because in b 132 is not the square of any number of a.

// a = [121, 144, 19, 161, 19, 144, 19, 11]  
// b = [121, 14641, 20736, 36100, 25921, 361, 20736, 361]
// comp(a,b) returns false because in b 36100 is not the square of any number of a.

// Remarks
// a or b might be [] or {} (all languages except R, Shell).
// a or b might be nil or null or None or nothing (except in C++, COBOL, Crystal, D, Dart, Elixir, Fortran, F#, Haskell, Nim, OCaml, Pascal, Perl, PowerShell, Prolog, PureScript, R, Racket, Rust, Shell, Swift).
// If a or b are nil (or null or None, depending on the language), the problem doesn't make sense so return false.

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

class Same {
public :
    static bool comp(std::vector<int>&a, std::vector<int>&b) {
        for (int n : a)
            std::cout << n << ' ';
        std::cout << std::endl;
      
        for (int n : b)
            std::cout << n << ' ';
        std::cout << std::endl;
      
        if (a.size() != b.size())
            return false;

        for (size_t idx = 0; idx < a.size(); idx++) {
            if (a[idx] < 0)
                a[idx] *= -1;

            if (b[idx] < 0)
                b[idx] *= -1;
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (size_t curNum = 0; curNum < a.size(); curNum++)
            if (pow(a[curNum], 2) != b[curNum])
                return false;

        return true;
    }
};

int main() {
    std::cout << std::boolalpha;
    Same c;
    std::vector<int> a, b;

    // a = {121, 144, 19, 161, 19, 144, 19, 11};
    // b = {14641, 20736, 361, 25921, 361, 20736, 361, 121};
    // std::cout << c.comp(a, b) << std::endl;  // true

    // a = {121, 144, 19, 161, 19, 144, 19, 11};
    // b = {14641, 20736, 361, 25921, 361, 20736, 362, 121};
    // std::cout << c.comp(a, b) << std::endl;  // false

    a = {-121, 1440, 191, 161, 19, 144, 195, 11};
    b = {121, 14641, 2073600, 36481, 25921, 361, 20736, 38025};
    std::cout << c.comp(a, b) << std::endl;  // true

    return 0;
}
//
#include <algorithm>

class Same {
public:
    static bool comp(std::vector<int>, std::vector<int>);
};

bool Same::comp(std::vector<int> a, std::vector<int> b) {
    for (auto& v : a)
        v = v * v;
    
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    
    return a == b;
}
