#include <string>

int get_age(const std::string& she_said) {
    return static_cast<int>(she_said[0]) - 48;
}

//
#include <string>

int get_age(const std::string& she_said) {
    return she_said[0] - '0';
}
