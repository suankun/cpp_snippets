// https://www.codewars.com/kata/5aa3af22ba1bb5209f000037/train/cpp
#include <string>
#include <sstream>
#include <vector>
#include <cctype>
#include <algorithm>

std::vector<std::string> tokenize(const std::string& eq) {
    std::vector<std::string> tokens;
    std::string token;
    for (char ch : eq) {
        if (std::isspace(ch)) continue;
        if (std::isdigit(ch) || std::isalpha(ch)) {
            token += ch;
        } else {
            if (!token.empty()) {
                tokens.push_back(token);
                token.clear();
            }
            tokens.push_back(std::string(1, ch));
        }
    }
    if (!token.empty()) {
        tokens.push_back(token);
    }
    return tokens;
}

std::string solve(std::string eq) {
    std::vector<std::string> tokens = tokenize(eq);
    std::reverse(tokens.begin(), tokens.end());
    
    std::string result;
    for (size_t i = 0; i < tokens.size(); ++i) {
        result += tokens[i];
        if (i != tokens.size() - 1) {
            result += "";
        }
    }
    
    return result;
}
