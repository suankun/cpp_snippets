// https://www.codewars.com/kata/598980a41e55117d93000015/train/cpp

// Aliens send messages to our planet, but they use a very strange language. Try to decode the messages!

#include <string>
#include <vector>
#include <map>
#include <algorithm>

std::string decode(const std::string &m) {
    std::map<std::string, char> cipher = {
        {"/\\", 'a'},
        {"]3", 'b'},
        {"(", 'c'},
        {"|)", 'd'},
        {"[-", 'e'},
        {"/=", 'f'},
        {"(_,", 'g'},
        {"|-|", 'h'},
        {"|", 'i'},
        {"_T", 'j'},
        {"/<", 'k'},
        {"|_", 'l'},
        {"|\\/|", 'm'},
        {"|\\|", 'n'},
        {"()", 'o'},
        {"|^", 'p'},
        {"()_", 'q'},
        {"/?", 'r'},
        {"_\\~", 's'},
        {"~|~", 't'},
        {"|_|", 'u'},
        {"\\/", 'v'},
        {"\\/\\/", 'w'},
        {"><", 'x'},
        {"`/", 'y'},
        {"~/_", 'z'},
        {"__", ' '}
    };

    char delimiter = m[0];

    std::vector<std::string> tokens;
    std::string token;
    for (size_t i = 1; i < m.length(); i++) {
        if (m[i] == delimiter) {
            if (!token.empty()) {
                tokens.push_back(token);
                token.clear();
            }
        } else {
            token += m[i];
        }
    }
    if (!token.empty()) {
        tokens.push_back(token);
    }

    std::string decodedMessage;
    for (auto it = tokens.rbegin(); it != tokens.rend(); it++) {
        if (cipher.find(*it) != cipher.end()) {
            decodedMessage += cipher[*it];
        }
    }

    return decodedMessage;
}
