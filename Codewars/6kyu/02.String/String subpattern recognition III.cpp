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
//
#include <map>

int GCD(int a, int b) {
    return b == 0 ? a : GCD(b, a % b);
}

std::string hasSubpattern(const std::string& str) {
    std::map<char, int> symbol_frequencies;
    for (char c : str) ++symbol_frequencies[c];
        
    int gcd = 0;
    for (auto& f : symbol_frequencies) gcd = GCD(f.second, gcd);

    std::string res;
    for (auto& f : symbol_frequencies) res.append(f.second / gcd, f.first);
    
    return res;
}
