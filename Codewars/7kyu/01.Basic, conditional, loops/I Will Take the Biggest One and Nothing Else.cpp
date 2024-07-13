// https://www.codewars.com/kata/631082840289bf000e95a334/train/cpp
unsigned long maxIntChain(unsigned long n) {
    if (n > 4) {
        return (n - 1) / 2 * (n / 2 + 1);
    } else {
        return -1;
    }
}
