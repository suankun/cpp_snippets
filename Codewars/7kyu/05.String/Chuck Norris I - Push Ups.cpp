// https://www.codewars.com/kata/570564e838428f2eca001d73/train/cpp
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <cctype>

using namespace std;

int binaryToDecimal(const std::string &binaryString) {
    int decimalValue = 0;
    int length = binaryString.length();

    for (int i = 0; i < length; ++i) {
        if (binaryString[length - i - 1] == '1') {
            decimalValue += std::pow(2, i);
        }
    }

    return decimalValue;
}

bool allDigits(const std::string &str) {
    return std::all_of(str.begin(), str.end(), ::isdigit);
}

void clearNonDigits(std::string &str) {
    str.erase(std::remove_if(str.begin(), str.end(), [](char c) {
        return c != '0' && c != '1';
    }), str.end());
}

int chuckPushUps(const std::string & input) 
{
    std::vector<std::string> numbers;

    std::string buffer;
    std::istringstream istr(input);
    while (istr >> buffer) {
        if (!allDigits(buffer))
            clearNonDigits(buffer);

        if (buffer.length() != 0)
            numbers.push_back(buffer);
    }
        
        
    
    int highestNum = 0;
    for (const string & num : numbers) {
        int tempNum = binaryToDecimal(num);
        if (highestNum < tempNum)
            highestNum = tempNum;
    }

    return highestNum == 0 ? -1 : highestNum;
}

int main() {
    // cout << chuckPushUps("01111101000 Hi 01111101001 Chuck look at you go! 01111101010 Phwoar 01111101100 How was work? 01111101101") << endl;  // 1005);
    // cout << chuckPushUps("010011100010000 Chuck! 010011100010001 Stop that! 010011100010010 New vest? 010011100010011 010011100010100") << endl;  // 10004);
    // cout << chuckPushUps("0100111101111 Have you made dinner? 0100111110000 More push Ups? 0100111110001 0100111110010 Im leaving you! 0100111110011 0100111110100 Stop!!!!") << endl;  // 2548);
    // cout << chuckPushUps("01101010000101 Oi Come Here! 01101010000110 Idiot! 01101010000101 You have tiny arms... 01101010000100 01101010000011 Fine Ill go to bed on my own!") << endl;  // 6790);
    // cout << chuckPushUps("") << endl;  // -1);
    // cout << chuckPushUps("1ee1gf00t10h1011tr00") << endl;  // 3244);
    // cout << chuckPushUps("1000 1001 1010 1011 110") << endl;  // 11);
    // cout << chuckPushUps("List of jobs: clean house, stop being such a badass, cook dinner, buy some sleeves for that stupid denim vest!") << endl;  // -1);
    // cout << chuckPushUps("01101010000101 01101010000110 01101010000100 01101010000011") << endl;  // 6790);
    // cout << chuckPushUps("not exist', 'a', 'numbers") << endl;  // -1);
    // cout << chuckPushUps("100") << endl;  // 4);
    cout << chuckPushUps("tx1l0YPp1IovXsaj7qc0gUWwl1Wws0cPMFkAz") << endl;  // 42);

    return 0;
}
//
int chuckPushUps( const std::string& s ) {
    int r{}, n{};
    for ( const char c : s )
        switch ( c ) {
        case '0': n <<= 1; break;
        case '1': ++( n <<= 1 ); break;
        case ' ': r = std::max( r, n ), n = 0;
        }
    return ( r = std::max( r, n )) ? r : -1;
}
