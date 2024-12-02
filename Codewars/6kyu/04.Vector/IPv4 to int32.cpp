// https://www.codewars.com/kata/52ea928a1ef5cfec800003ee/train/cpp

// Take the following IPv4 address: 128.32.10.1. This address has 4 octets where each octet is a single byte (or 8 bits).

// 1st octet 128 has the binary representation: 10000000
// 2nd octet 32 has the binary representation: 00100000
// 3rd octet 10 has the binary representation: 00001010
// 4th octet 1 has the binary representation: 00000001
// So 128.32.10.1 == 10000000.00100000.00001010.00000001

// Because the above IP address has 32 bits, we can represent it as the 32 bit number: 2149583361.

// Write a function ip_to_int32(ip) ( JS: ipToInt32(ip) ) that takes an IPv4 address and returns a 32 bit number.

// Example
// "128.32.10.1" => 2149583361

#include <cstdint>
#include <string>
#include <sstream>
#include <vector>
#include <iostream>

uint32_t ip_to_int32(const std::string& ip) {
    std::stringstream ss(ip);
    std::string segment;
    std::vector<int> segments;
    
    while (std::getline(ss, segment, '.'))
        segments.push_back(std::stoi(segment));

    uint32_t result = 0;
    for (int value : segments)
        result = (result << 8) | value;
    
    return result;
}

int main() {

    std::string ip = "192.168.0.1";
    uint32_t result = ip_to_int32(ip);
    std::cout << "The integer representation of " << ip << " is " << result << std::endl;

    return 0;
}
