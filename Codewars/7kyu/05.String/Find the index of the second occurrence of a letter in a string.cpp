// https://www.codewars.com/kata/63f96036b15a210058300ca9/train/cpp
#include <string>

int secondSymbol(const std::string& str, char symbol) {
    int counter {}, index {};
    for (size_t i {}; i<str.length(); i++) {
        if (str[i] == symbol) counter++;
        if (counter == 2) {
        index = i;
        break;
        }
    }
    return counter == 2 ? index : -1;
}
//
#include <string>

int secondSymbol(const std::string& str, char symbol) {
    return str.find(symbol, str.find(symbol) + 1);
}
