// https://www.codewars.com/kata/5500d54c2ebe0a8e8a0003fd/train/cpp
long long mygcd(long long a, long long b) {
  long long max = a>b?a:b;
  for (long long i=846; i>0; i--) {
    if (a%i==0 && b%i==0) return i;
  }
  return 0;
}
//
long long mygcd(long long a, long long b) {
  return (b == 0) ? a : mygcd(b, a%b);
}
