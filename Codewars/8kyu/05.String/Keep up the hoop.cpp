// https://www.codewars.com/kata/55cb632c1a5d7b3ad0000145/train/cpp
#include <string>

std::string hoop_count(unsigned n) {
    return n >= 10 ? "Great, now move on to tricks" : "Keep at it until you get it";
}
//
#include <string>
#include <array>

inline constexpr unsigned gk_treshold = 10;
inline const std::array<std::string, 2> gk_message = {
    "Great, now move on to tricks", "Keep at it until you get it"
};

std::string hoop_count(unsigned n) {
    return gk_message[n < gk_treshold];
}
