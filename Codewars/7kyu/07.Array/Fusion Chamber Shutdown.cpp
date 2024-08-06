// https://www.codewars.com/kata/5fde1ea66ba4060008ea5bd9/train/cpp
#include <iostream>
#include <array>

std::array<int, 3> do_reaction(int m1, int m1_t, int m2, int m2_t) {
    int molecules = 0;

    while (m1 >= m1_t && m2 >= m2_t) {
        m1 -= m1_t;
        m2 -= m2_t;
        molecules += 1;
    }

    return {molecules, m1, m2};
}

std::array<int, 3> burner(int c, int h, int o) {
    auto [water, remaining_h1, remaining_o1] = do_reaction(h, 2, o, 1);
    auto [co2, remaining_c1, remaining_o2] = do_reaction(c, 1, remaining_o1, 2);
    auto [methane, remaining_c2, remaining_h2] = do_reaction(remaining_c1, 1, remaining_h1, 4);

    return {water, co2, methane};
}
//
#include <array>
#include <algorithm>

std::array<int, 3> burner(int c, int h, int o) {
    int h2o = std::min(o, h / 2);
    int co2 = std::min(c, (o - h2o) / 2);
    int ch4 = std::min(c - co2, (h - 2 * h2o) / 4);
    return std::array<int, 3>{h2o, co2, ch4};
}
