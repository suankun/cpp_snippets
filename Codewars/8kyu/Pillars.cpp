// https://www.codewars.com/kata/5bb0c58f484fcd170700063d/train/cpp
long pillars(int num_of_pillars, int distance, int width) {
  return num_of_pillars==1 ? 0 : (num_of_pillars-1)*(distance*100)+((num_of_pillars-2)*width);
}
///////////
long pillars(int n, int d, int w) {
  return n == 1? 0 : --n * d * 100 + --n * w;
}