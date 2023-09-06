// https://www.codewars.com/kata/58845748bd5733f1b300001f/train/cpp
#include <iostream>
#include <vector>

typedef unsigned int ui;

ui rangeBitCount(ui a, ui b) {
    std::vector<ui> consec_numbers;
    for (ui i {a}; i<=b; i++) consec_numbers.push_back(i);
    // for (ui num: consec_numbers) std::cout << num;
    // std::cout << std::endl;

    ui count_of_1s {};
    std::vector<std::vector<ui>> ui_to_bin;
    for (int i {}; i < consec_numbers.size(); i++) {
        std::vector<ui> num_bin;
        while (consec_numbers[i]>0) {
            ui remainder = consec_numbers[i]%2;
            if (remainder == 1) count_of_1s++;
            num_bin.push_back(remainder);
            consec_numbers[i] /= 2;
        }
        ui_to_bin.push_back(num_bin);
    }

    // print 2d vector
    // for (int i {}; i<ui_to_bin.size(); i++) {
    //     for (int j {}; j<ui_to_bin[i].size(); j++) {
    //         std::cout << ui_to_bin[i][j] << ' ';
    //     }
    //     std::cout << std::endl;
    // }

    return count_of_1s;
}

int main() {
    std::cout << rangeBitCount(2, 7) << std::endl;  // 11
    std::cout << rangeBitCount(0, 1) << std::endl;  // 1
    std::cout << rangeBitCount(4, 4) << std::endl;  // 1

    return 0;
}
//
#include <bitset>

typedef unsigned int ui;

ui rangeBitCount(ui a, ui b) {
  ui sum{0};
  for (ui i = a; i <= b; i++) sum += std::bitset<64>(i).count();
  return sum;
}
