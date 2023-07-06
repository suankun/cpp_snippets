// https://www.codewars.com/kata/5865cff66b5699883f0001aa/train/cpp
#include <iostream>
#include <string>
using namespace std;

std::string to_time(unsigned seconds) {
    return std::to_string(seconds / 3600) + " hour(s) and " + std::to_string((seconds%3600) / 60) + " minute(s)";
}

int main(){
    std::cout << to_time(3600) << std::endl;  // "1 hour(s) and 0 minute(s)"
    
    return 0;
}
//
// #include <string>
// #include <fmt/core.h>

// std::string to_time(unsigned seconds) {
//   return fmt::format("{} hour(s) and {} minute(s)", seconds / 3600, seconds / 60 % 60);
// }
