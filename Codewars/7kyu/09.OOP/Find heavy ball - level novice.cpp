// https://www.codewars.com/kata/544047f0cf362503e000036e/train/cpp
#include<vector>

unsigned int findBall(Scales scales) {
// call scales.getWeight() max 4 times
// return indexOfHeavyBall;
  for (unsigned int i = 1; i < 8; i++) {
    std::vector<int> leftPan {static_cast<int>(i - 1)};
    std::vector<int> rightPan {static_cast<int>(8 - i)};
    int w = scales.getWeight(leftPan, rightPan);

    if (w == -1) {// left pan is heavier
      return leftPan[0];
    }

    if (w == 1) {// right pan is heavier
      return rightPan[0];
    }
  }
}
