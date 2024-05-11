// https://www.codewars.com/kata/619f200fd0ff91000eaf4a08/train/cpp
enum { Even, Odd, Either };
int Odd_or_Even(unsigned int n) {
    if (n % 2 != 0) return Either;
    else if (n/2 % 2 == 0) return Even;
    else return Odd;
}
//
int Odd_or_Even( unsigned n ) {
    return n % 2 ? 2 : n / 2 % 2;
}
//
int Odd_or_Even(unsigned int n)
{ 
    return n & 1 ? Either : n >> 1 & 1;
}
