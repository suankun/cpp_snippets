// https://www.codewars.com/kata/57073869924f34185100036d/train/cpp
#include <string>
#include <random>
#include <cctype>

std::string randomCase(std::string x) {
    // Create a random device and a random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 1);

    for (char& c : x) {
        if (dis(gen)) {
            c = std::toupper(c);
        } else {
            c = std::tolower(c);
        }
    }

    return x;
}
//
#include <string>
#include <random>

std::string randomCase(std::string x) {
    for (auto& c : x)
        c = rand() % 2 ? std::tolower(c) : std::toupper(c);
        
    return x;
}
