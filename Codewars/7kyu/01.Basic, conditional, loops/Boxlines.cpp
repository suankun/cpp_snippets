// https://www.codewars.com/kata/6129095b201d6b000e5a33f0/train/cpp
unsigned long long f(unsigned int x, unsigned int y, unsigned int z) {
    unsigned long long a = static_cast<unsigned long long>(x);
    unsigned long long b = static_cast<unsigned long long>(y);
    unsigned long long c = static_cast<unsigned long long>(z);

    return 3 * (a * b * c) + 2 * (a * b + a * c + b * c) + a + b + c;
}
