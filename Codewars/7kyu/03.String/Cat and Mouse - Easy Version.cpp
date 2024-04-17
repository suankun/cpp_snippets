// https://www.codewars.com/kata/57ee24e17b45eff6d6000164/train/cpp
#include <string>

std::string cat_mouse(std::string x) {
    return x.length()>5 ? "Escaped!" : "Caught!";
}
