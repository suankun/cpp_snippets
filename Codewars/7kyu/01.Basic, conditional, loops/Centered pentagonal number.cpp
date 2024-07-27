// https://www.codewars.com/kata/5fb856190d5230001d48d721/train/cpp
long pentagonal(long n) {
  return (n < 1) ? -1 : (5 * n * n - 5 * n + 2) / 2;
}
