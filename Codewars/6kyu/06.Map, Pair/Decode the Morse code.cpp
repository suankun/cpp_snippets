// https://www.codewars.com/kata/54b724efac3d5402db00065e/train/cpp
#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <algorithm>

// #include <unordered_map>
// std::unordered_map<std::string, char> MORSE_CODE = {
//     {".-", 'A'},   {"-...", 'B'}, {"-.-.", 'C'}, {"-..", 'D'}, {".", 'E'}, 
//     {"..-.", 'F'}, {"--.", 'G'},  {"....", 'H'}, {"..", 'I'},  {".---", 'J'}, 
//     {"-.-", 'K'},  {".-..", 'L'}, {"--", 'M'},   {"-.", 'N'},  {"---", 'O'}, 
//     {".--.", 'P'}, {"--.-", 'Q'}, {".-.", 'R'},  {"...", 'S'}, {"-", 'T'}, 
//     {"..-", 'U'},  {"...-", 'V'}, {".--", 'W'},  {"-..-", 'X'}, {"-.--", 'Y'}, 
//     {"--..", 'Z'}, {"-----", '0'}, {".----", '1'}, {"..---", '2'}, {"...--", '3'}, 
//     {"....-", '4'}, {".....", '5'}, {"-....", '6'}, {"--...", '7'}, {"---..", '8'}, 
//     {"----.", '9'}
// };

extern std::map<std::string, std::string> MORSE_CODE;

std::string decodeMorseWord(const std::string& morseWord) {
    std::string decodedWord;
    std::istringstream wordStream(morseWord);
    std::string letterCode;

    while (std::getline(wordStream, letterCode, ' ')) {
        if (!letterCode.empty()) {
            decodedWord += MORSE_CODE[letterCode];
        }
    }

    return decodedWord;
}

std::string decodeMorse(const std::string& morseCode) {
    std::string decodedMessage;
    
    std::string trimmedMorseCode = morseCode;
    trimmedMorseCode.erase(0, trimmedMorseCode.find_first_not_of(' '));
    trimmedMorseCode.erase(trimmedMorseCode.find_last_not_of(' ') + 1);

    size_t start = 0, end;
    bool firstWord = true;
    while ((end = trimmedMorseCode.find("   ", start)) != std::string::npos) {
        std::string morseWord = trimmedMorseCode.substr(start, end - start);

        if (!firstWord) {
            decodedMessage += ' ';
        }
        decodedMessage += decodeMorseWord(morseWord);
        firstWord = false;

        start = end + 3;
    }

    std::string morseWord = trimmedMorseCode.substr(start);
    if (!firstWord) {
        decodedMessage += ' ';
    }
    decodedMessage += decodeMorseWord(morseWord);

    return decodedMessage;
}

int main() {
    std::string morseCode = ".... . -.--   .--- ..- -.. .";
    std::string decoded = decodeMorse(morseCode);
    std::cout << decoded << std::endl;  // "HEY JUDE"

    return 0;
}
//
// #include <regex>

// const std::regex morse("([^\\s]+|\\s{3})");

// std::string decodeMorse(std::string morseCode) {
//     std::string decoded;
    
//     auto begin = morseCode.begin() + morseCode.find_first_not_of(' ');
//     auto end = morseCode.begin() + morseCode.find_last_not_of(' ') + 1;
    
//     for (auto it = std::sregex_iterator(begin, end, morse); it != std::sregex_iterator(); ++it) {
//         std::string str = it->str();
//         decoded += str == "   " ? " " : MORSE_CODE[str];
//     }
    
//     return decoded;
// }
//
// std::string decodeMorse(std::string morseCode) {
//     std::string decoded;
//     const char* current = morseCode.data(), *end = current + morseCode.size();
  
//     while (*current == ' ') current++;
//     while (end[-1] == ' ') end--;
    
//     while (current < end) {
//         if (*current == ' ') {
//         decoded += ' ';
//         current += 2;
//         } else {
//         const char* start = current;
//         while (current < end && *current == '.' || *current == '-') ++current;
//         decoded += MORSE_CODE[std::string(start, current)];
//         current++;
//         }
//     }
//     return decoded;
// }
