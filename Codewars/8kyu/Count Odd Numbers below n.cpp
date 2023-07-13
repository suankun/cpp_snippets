// https://www.codewars.com/kata/59342039eb450e39970000a6/train/cpp
int odd_count(int n){
  return n/2;
}
//
int odd_count(const int n){
  return (n > 0) ? (n >> 1) : 0;
}
