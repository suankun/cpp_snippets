#include <string>

std::string sum_str(const std::string& a, const std::string& b) {
  return std::to_string(std::stoi(a == "" ? "0" : a) + std::stoi(b == "" ? "0" : b));
}
//
#include <string>

std::string sum_str(const std::string& a, const std::string& b) {
    if (a.empty() && b.empty())
        return "0";

    std::string result;
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry != 0) {
        int digit1 = (i >= 0) ? a[i] - '0' : 0;
        int digit2 = (j >= 0) ? b[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result = std::to_string(sum % 10) + result;

        i--;
        j--;
    }

    return result;
}