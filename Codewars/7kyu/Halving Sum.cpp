// https://www.codewars.com/kata/5a58d46cfd56cb4e8600009d/train/cpp
unsigned halving_sum(unsigned n) {
    unsigned sum=0;
    while (n>0) {
        sum+=n;
        n/=2;
    }
    return sum;
}
//
unsigned halving_sum(unsigned n)
{
  return n/2 > 0 ? n + halving_sum(n/2) : n;
}
