// https://www.codewars.com/kata/5b7bd90ef643c4df7400015d/train/cpp
#include <string>
#include <cmath>

bool solve(std::string st) {
    for (int i = 0; i < st.length() / 2; ++i) {
        char left = st[i];
        char right = st[st.length() - i - 1];
        if ((left == 'a' && right != 'a' && right != 'c') ||
            (left == 'z' && right != 'z' && right != 'x') ||
            std::abs(left - right) > 2 ||
            std::abs(left - right) == 1) {
            return false;
        }
    }
    return true;
}
//
#include <math.h>

bool solve(std::string st) {
    int l = st.size();
    for (int i = 0; i < l / 2; i++) {
        int tmp = abs((int)st[i] - (int)st[l - i - 1]);
        if (tmp != 0 && tmp != 2)
            return false;
    }

    return true;
}
