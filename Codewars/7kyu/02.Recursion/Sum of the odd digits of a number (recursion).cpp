// https://www.codewars.com/kata/5a4b798fb3bfa83de10000ad/train/cpp
int sum_odd_digits(int n)
{
    if (n == 0)
        return 0;
    
    int last_digit = n % 10;
    
    if (last_digit % 2 != 0)
        return last_digit + sum_odd_digits(n / 10);
    else
        return sum_odd_digits(n / 10);
}
//
// int sum_odd_digits(int n, int res = 0) {
//     return n > 0 ? sum_odd_digits(n / 10, res + (n % 2 ? n % 10 : 0)) : res;
// }
