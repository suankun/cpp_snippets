// https://www.codewars.com/kata/5a27e3438882f334a10000e3/train/cpp
#include <cmath>

int distance(int n) {
    if (n == 1) return 0;
    
    int layer = std::ceil((std::sqrt(n) - 1) / 2);
    
    int maxInLayer = (2 * layer + 1) * (2 * layer + 1);
    
    int sideLen = 2 * layer;
    
    int stepsFromMax = maxInLayer - n;
    
    int positionInLayer = stepsFromMax % sideLen;
    
    int midpointOffset = std::abs(positionInLayer - layer);
    
    return layer + midpointOffset;
}
//
#include <cmath>

int distance(int n)
{
    int layer = ceil(sqrt(n))/2;
    int rem = n-std::pow(2*layer-1, 2);
    
    return layer ? layer + std::abs(rem % (2*layer) - layer) : 0;
}
