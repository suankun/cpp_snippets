// https://www.codewars.com/kata/5a4a2973d8e14586c700000a/train/cpp
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <numeric>

long gcd(long x, long y) {
    return y == 0 ? x : gcd(y, x % y);
}

std::string hasSubpattern(const std::string& str) {
    std::unordered_map<char, long> occurs;
    
    for (char c : str) {
        occurs[c]++;
    }

    long overall_gcd = std::accumulate(occurs.begin(), occurs.end(), 0L, [](long gcd_value, const std::pair<char, long>& p) {
        return gcd_value == 0 ? p.second : gcd(gcd_value, p.second);
    });

    std::string result;
    for (const auto& entry : occurs) {
        result += std::string(entry.second / overall_gcd, entry.first);
    }

    std::sort(result.begin(), result.end());

    return result;
}
