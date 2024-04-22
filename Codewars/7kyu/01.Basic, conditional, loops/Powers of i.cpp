// https://www.codewars.com/kata/5a97387e5ee396e70a00016d/train/cpp
#include <string>

std::string pofi(unsigned n) {
    switch (n % 4) {
        case 0: return "1";
        case 1: return "i";
        case 2: return "-1";
        case 3: return "-i";
    }
    return "";
}
