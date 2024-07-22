// https://www.codewars.com/kata/5826f54cc60c7e5266000baf/train/cpp
#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int minimumPerimeter (int area)
{
  int minPerimeter = INT_MAX;
  for (int height = 1; height <= std::sqrt(area); height++) {
      if (area % height == 0) {
          int width = area / height;
          int perimeter = 2 * (height + width);
          if (minPerimeter > perimeter) {
              minPerimeter = perimeter;
          }
      }
  }
  return minPerimeter;
}

int main() {
    cout << minimumPerimeter(45) << endl;  // 28
    cout << minimumPerimeter(30) << endl;  // 22
    cout << minimumPerimeter(81) << endl;  // 36
    cout << minimumPerimeter(89) << endl;  // 180

    return 0;
}
//
#include <cmath>

int minimumPerimeter (int area) {
    int a = std::sqrt(area);
    for (; a > 0 && area % a != 0; --a);
    return 2 * (a + area / a);
}
