// https://www.codewars.com/kata/5b2be37991c7460d17000009/train/cpp
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <map>

std::string communicationModule(std::string packet) {
    std::string header = packet.substr(0, 4);
    std::string inst = packet.substr(4, 4);
    std::string data1_str = packet.substr(8, 4);
    std::string data2_str = packet.substr(12, 4);
    std::string footer = packet.substr(16, 4);

    int data1 = std::stoi(data1_str);
    int data2 = std::stoi(data2_str);

    std::map<std::string, std::function<int(int, int)>> ops = {
        {"0F12", [](int a, int b) { return a + b; }},
        {"B7A2", [](int a, int b) { return a - b; }},
        {"C3D9", [](int a, int b) { return a * b; }}
    };

    int res = ops[inst](data1, data2);

    if (res < 0) {
        res = 0;
    } else if (res > 9999) {
        res = 9999;
    }

    std::ostringstream res_str;
    res_str << std::setw(4) << std::setfill('0') << res;

    std::string result = header + "FFFF" + res_str.str() + "0000" + footer;

    return result;
}

int main() {
    std::string packet = "ABCD0F1200020003EFGH";
    std::string result = communicationModule(packet);
    std::cout << result << std::endl;  // Outputs: ABCDFFFF00050000EFGH
    return 0;
}
//
#include <fmt/core.h>
#include <unordered_map>

std::string communicationModule(std::string p)
{
    int D1 = std::stoi(p.substr(8, 4)), D2 = std::stoi(p.substr(12, 4));
    
    std::unordered_map<std::string, std::string> ops = {
        {"0F12", fmt::format("{:04}", std::min(D1+D2, 9999))},
        {"B7A2", fmt::format("{:04}", std::max(D1-D2, 0))},
        {"C3D9", fmt::format("{:04}", std::min(D1*D2, 9999))}
    };
    
    return fmt::format("{}FFFF{}0000{}", p.substr(0,4), ops[p.substr(4,4)], p.substr(16,4));
}
