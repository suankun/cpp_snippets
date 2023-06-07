// https://www.codewars.com/kata/5951d30ce99cf2467e000013/train/cpp
bool PythagoreanTriple(const int a, const int b, const int c)
{
  if ((a*a)+(b*b)==c*c) return true;
  else if ((a*a)+(c*c)==b*b) return true;
  else if ((b*b)+(c*c)==a*a) return true;
  return false;
}
//////////////
bool PythagoreanTriple(int a, int b, int c) {
  return a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b;
}
