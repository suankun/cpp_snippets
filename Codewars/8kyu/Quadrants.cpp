// https://www.codewars.com/kata/643af0fa9fa6c406b47c5399/train/cpp
int quadrant(int x, int y) {
    if (x > 0 && y > 0) {
        return 1; // First quadrant
    } else if (x < 0 && y > 0) {
        return 2; // Second quadrant
    } else if (x < 0 && y < 0) {
        return 3; // Third quadrant
    } else {
        return 4; // Fourth quadrant
    }
}
//
int quadrant(int x, int y) {
  return x < 0 ? y < 0 ? 3 : 2 : y < 0 ? 4 : 1;
}
