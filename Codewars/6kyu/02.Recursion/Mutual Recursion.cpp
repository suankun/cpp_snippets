// https://www.codewars.com/kata/53a1eac7e0afd3ad3300008b/train/cpp
int M(int n);

int F(int n) {
    if (n == 0) {
        return 1;
    }
    return n - M(F(n - 1));
}

int M(int n) {
    if (n == 0) {
        return 0;
    }
    return n - F(M(n - 1));
}
