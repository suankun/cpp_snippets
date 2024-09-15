// https://www.codewars.com/kata/526571aae218b8ee490006f4/train/cpp
unsigned int countBits(unsigned long long n) {
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;  
    }
    return count;
}
