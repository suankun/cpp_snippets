// https://www.codewars.com/kata/5d59576768ba810001f1f8d6/train/c
void quadratic(int x1, int x2, int coefficients[3]) {
    coefficients[0] = 1;
    coefficients[1] = -x1 - x2;
    coefficients[2] = x1 * x2;
}
