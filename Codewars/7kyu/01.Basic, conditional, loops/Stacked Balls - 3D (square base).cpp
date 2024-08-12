// https://www.codewars.com/kata/5bb493932ce53339dc0000c2/train/cpp
#include <cmath>

double stack_height_3d(int layers)
{
    return !layers ? 0 : (layers - 1) / sqrt(2) + 1.0;
}
