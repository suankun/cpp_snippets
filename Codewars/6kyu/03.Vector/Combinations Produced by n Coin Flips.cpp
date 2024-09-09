// https://www.codewars.com/kata/629509fc033da70016b88741/train/cpp
#include <vector>
#include <string>
#include <cmath>

std::vector<std::string> coin_flips(int flips) {
    std::vector<std::string> coinFlips;
    int numCombinations = std::pow(2, flips);

    for (int i = 0; i < numCombinations; i++) {
        std::string combination = "";
        
        for (int j = flips - 1; j >= 0; j--) {
            if (i & (1 << j))
                combination += "T";
            else
                combination += "H";
        }

        coinFlips.push_back(combination);
    }

    return coinFlips;
}
