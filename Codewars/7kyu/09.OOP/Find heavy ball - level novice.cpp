// https://www.codewars.com/kata/544047f0cf362503e000036e/train/cpp
#include<vector>

struct Scales{
    int getWeight(std::vector<int> left, std::vector<int> right) {
        return left > right ? -1 : left < right ? 1 : 0;
    }
};

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
//
// #include<vector>

// unsigned int findBall(Scales scales) {
// // call scales.getWeight() max 4 times
// // return indexOfHeavyBall;
//     for (unsigned int i = 1; i < 8; i+=2) {
//         std::vector<int> leftPan{i - 1};
//         std::vector<int> rightPan{i};
//         int w = scales.getWeight(leftPan, rightPan);

//         if (w == -1) {// left pan is heavier
//             return leftPan[0];
//         }

//         if (w == 1) {// right pan is heavier
//             return rightPan[0];
//         }
//     }
// }
// //
// #include<vector>

// int findBall(Scales scales) {
//     for (int i = 0; i < 7; i += 2) {
//         int w = scales.getWeight({ i }, { i + 1 });
//         if (w == -1) return i;
//         if (w == 1) return i + 1;
//     }
// }