// https://www.codewars.com/kata/58ce8725c835848ad6000007/train/cpp
#include <cmath>
using namespace std;

// dry 1kg, water 99kg (99%)
// dry 1kg, water 50kg (98%)
// p0*w0 -- water 
// w0*100 - p0*w0 -- dry

int potatoes(int p0, int w0, int p1)
{
    return floor(w0 * (100 - p0) / (100 - p1));
}
