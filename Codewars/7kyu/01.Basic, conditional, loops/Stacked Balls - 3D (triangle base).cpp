// https://www.codewars.com/kata/5bbad1082ce5333f8b000006/train/cpp
#include <cmath>

double stack_height_3d(int layers)
{
    return layers > 0 ? sqrt(2 / 3.0) * (layers - 1) + 1 : 0;
}
