// https://www.codewars.com/kata/6357825a00fba284e0189798/train/cpp
unsigned long long get_sum(unsigned int n) {
    unsigned long long n_ull = n;
    unsigned long long n1 = n_ull + 1;
    unsigned long long n2 = 2 * n_ull + 1;

    unsigned long long term1 = n_ull * n1 * n2 / 3;
    unsigned long long term2 = 3 * n_ull * n1 / 2;
    unsigned long long term3 = n1;

    return term1 + term2 + term3;
}
//
unsigned long long get_sum(unsigned int n) {
    unsigned long long x = n;
    return  ((x + 1) * (x + 2) * (4*x + 3))/6;
}
