// https://www.codewars.com/kata/5b06c990908b7eea73000069/train/cpp

// Consider the sequence S(n, z) = (1 - z)(z + z**2 + z**3 + ... + z**n) where z is a complex number and n a positive integer (n > 0).

// When n goes to infinity and z has a correct value (ie z is in its domain of convergence D), S(n, z) goes to a finite limit lim depending on z.

// Experiment with S(n, z) to guess the domain of convergence Dof S and lim value when z is in D.

// Then determine the smallest integer n such that abs(S(n, z) - lim) < eps where eps is a given small real number and abs(Z) is the modulus or norm of the complex number Z.

// Call f the function f(z, eps) which returns n. If z is such that S(n, z) has no finite limit (when z is outside of D) f will return -1.

// Examples:
// I is a complex number such as I * I = -1 (sometimes written i or j).

// f(0.3 + 0.5 * I, 1e-4) returns 17

// f(30 + 5 * I, 1e-4) returns -1

// Remark:
// For languages that don't have complex numbers or "easy" complex numbers, a complex number z is represented by two real numbers x (real part) and y (imaginary part).

// f(0.3, 0.5, 1e-4) returns 17

// f(30, 5, 1e-4) returns -1

// Note:
// You pass the tests if abs(actual - expected) <= 1

#include <complex>
#include <cmath>
#include <iostream>

using namespace std;

int f(complex<double> z, double eps)
{
    int n = 1;
    complex<double> prev_sum = 0;
    complex<double> term = z;
    const int max_iterations = 10000;

    while (n <= max_iterations) {
        complex<double> current_sum = prev_sum + term;

        if (n > 1 && abs(current_sum - prev_sum) < eps) {
            return n;
        }

        prev_sum = current_sum;
        term *= z;
        n++;
    }

    return -1;
}

int main() {
    complex<double> z(0.5, 0.5);
    double eps = 1e-6;

    int result = f(z, eps);
    cout << "Result: " << result << endl;

    return 0;
}
