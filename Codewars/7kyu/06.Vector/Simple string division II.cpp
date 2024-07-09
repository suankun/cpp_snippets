// https://www.codewars.com/kata/5b8be3ae36332f341e00015e/train/cpp
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

unsigned solve(const std::string &s, unsigned k)
{
    unsigned count = 0;
    std::vector<std::string> numbers;
    std::string word;
    std::istringstream iss(s);
    
    while (iss >> word)
        numbers.push_back(word);
    
    for (size_t i = 0; i < numbers.size(); i++)
        for (size_t j = 0; j < numbers.size(); j++)
            if (i != j) {
                std::string concatenated = numbers[i] + numbers[j];
                unsigned long long num = std::stoull(concatenated);
                if (num % k == 0)
                    count++;
            }
    
    return count;
}

int main() {
    std::cout << solve("1 2 36 4 8", 2) << std::endl;  // 16
    std::cout << solve("1 2 36 4 8", 3) << std::endl;  //  8
    std::cout << solve("1 2 36 4 8", 4) << std::endl;  // 11
    std::cout << solve("1 2 36 4 8", 8) << std::endl;  //  4

    return 0;
}
