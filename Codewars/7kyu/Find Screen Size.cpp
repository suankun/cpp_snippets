// https://www.codewars.com/kata/5bbd279c8f8bbd5ee500000f/train/cpp
#include <iostream>
using namespace std;

#include <string>

std::string find_screen_height(int width, const std::string &ratio)
{
    size_t colonPos = ratio.find(':');

    std::string beforeColon = ratio.substr(0, colonPos);

    std::string afterColon = ratio.substr(colonPos + 1);

    int beforeColonInt = std::stoi(beforeColon);
    int afterColonInt = std::stoi(afterColon);

    double mult = (afterColonInt*1.0)/beforeColonInt;
    int height = width * mult;

    std::string result_ratio = std::to_string(width) + 'x' + std::to_string(height);

    return result_ratio;
}

int main() {
    cout << find_screen_height(1024,  "4:3") << endl;  // "1024x768"
    cout << find_screen_height(1280, "16:9") << endl;  // "1280x720"

    return 0;
}
//
#include <string>

std::string find_screen_height(int width, const std::string& ratio)
{
  return std::to_string(width) + "x" + std::to_string(std::stoi(ratio.substr(ratio.find(':') + 1, ratio.size())) * width / std::stoi(ratio.substr(0, ratio.find(':'))));
}
