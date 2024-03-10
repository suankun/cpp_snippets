// https://www.codewars.com/kata/555086d53eac039a2a000083/train/cpp
bool lovefunc(int f1, int f2) {
  return (f1 % 2 == 0 && f2 % 2 != 0) || (f1 % 2 != 0 && f2 % 2 == 0);
}
//
bool lovefunc(int a, int b) {
  return (a + b) % 2;
}
