// https://www.codewars.com/kata/5aba780a6a176b029800041c/train/cpp
int maxMultiple(int divisor, int bound) 
{
  int num {1}, N {};
  while (num<=bound) {
    if (num%divisor==0) N = num;
    num++;
  }
  return N;
}
//
int maxMultiple(int divisor, int bound) {
  return bound-bound%divisor;
}
