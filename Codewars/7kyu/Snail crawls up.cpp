// https://www.codewars.com/kata/5b93fecd8463745630001d05/train/cpp
int snail(int column, int day, int night) {
  int days_needed {};
  while (column > 0) {
    column -= day;
    days_needed++;
    if (column <= 0) break;
    column += night;
  }
  
  return days_needed;
}
//
constexpr int snail(const int column, const int day, const int night) {
  return (column + day - 2 * night - 1) / (day - night);
}
