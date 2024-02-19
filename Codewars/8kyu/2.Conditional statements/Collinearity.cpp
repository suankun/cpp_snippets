// https://www.codewars.com/kata/65ba420888906c1f86e1e680/train/cpp
bool collinearity(int x1, int y1, int x2, int y2) {
    // Handling special cases where any of the vectors is (0, 0)
    if ((x1 == 0 && y1 == 0) || (x2 == 0 && y2 == 0))
        return true;
    
    // Checking for collinearity
    if ((x1 == 0 && x2 == 0) || (y1 == 0 && y2 == 0)) {
        // If either x1 or x2 is zero, compare y coordinates
        return x1 * y2 == x2 * y1;
    } else {
        // Check if the ratios of corresponding coordinates are equal
        return (x1 * y2 == x2 * y1);
    }
}
//
bool collinearity(int x1, int y1, int x2, int y2) {
    if ((x1 == 0 && x2 == 0) || (y1 == 0 && y2 == 0)) return x1 * y2 == x2 * y1;
    else return (x1 * y2 == x2 * y1);
}
//
bool collinearity(int x1, int y1, int x2, int y2)
{
    return x1 * y2 == x2 * y1;
}