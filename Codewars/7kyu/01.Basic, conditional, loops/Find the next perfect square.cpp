// https://www.codewars.com/kata/56269eb78ad2e4ced1000013/train/cpp
#include <cmath>
long int findNextSquare(long int sq) {
    long int res = sqrt(sq);
    return res*res==sq ? (res+1)*(res+1) : -1;
}
