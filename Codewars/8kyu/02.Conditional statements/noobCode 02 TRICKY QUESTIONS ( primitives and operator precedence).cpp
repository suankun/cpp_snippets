// https://www.codewars.com/kata/572269697297444c570008b9/train/cpp
bool greaterThanLessThan(long a, long b, long c) {
    return (a < b) < c;
}
//
bool greaterThanLessThan(long a, long b, long c) {
    return a < b < c;
}
