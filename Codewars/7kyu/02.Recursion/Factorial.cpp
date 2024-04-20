// https://www.codewars.com/kata/57a049e253ba33ac5e000212/train/cpp

long long factorial(int n){
  if (n == 0 || n == 1)
    return 1;
  return n * factorial(n - 1);
}
//
long long factorial(int n){
  return n == 0 ? 1 : n * factorial(n - 1);
}
