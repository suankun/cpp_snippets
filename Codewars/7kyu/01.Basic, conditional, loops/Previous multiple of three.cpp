// https://www.codewars.com/kata/61123a6f2446320021db987d/train/cpp
int prev_mult_of_three (int n) {
    if (n % 3 == 0) return n;
    while (n > 0) {
        n /= 10;
        if (n % 3 == 0 && n != 0) return n;
    }
    return -1;
}
//
int prev_mult_of_three(int n) {
    while (n % 3 != 0)
        n /= 10;
    return n == 0 ? -1 : n;
}
