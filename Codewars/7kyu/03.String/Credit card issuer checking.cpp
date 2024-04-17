// https://www.codewars.com/kata/5701e43f86306a615c001868/train/cpp
#include <string>
std::string getIssuer(const std::string &number)
{
    if ((number[0]=='3' && number[1]=='4') || (number[0]=='3' && number[1]=='7')) {
        if (number.length()==15) return "AMEX";
    }
    if (number[0]=='6' && number[1]=='0' && number[2]=='1' && number[3]=='1') {
        if (number.length()==16) return "Discover";
    }
    if ((number[0]=='5' && number[1]=='1') || (number[0]=='5' && number[1]=='2') || 
        (number[0]=='5' && number[1]=='3') || (number[0]=='5' && number[1]=='4') || (number[0]=='5' && number[1]=='5')) {
        if (number.length()==16) return "Mastercard";
    }
    if (number[0]=='4') {
        if (number.length()==13 || number.length()==16) return "VISA";
    }
    return "Unknown";
}
//
std::string getIssuer(const std::string &number)
{
    if (number.substr(0, 2) == "34" || number.substr(0, 2) == "37" && number.length() == 15) return "AMEX";
    else if (number.substr(0, 4) == "6011" && number.length() == 16) return "Discover";
    else if (number[0] == '5' && number[1] - '0' <= 5) return "Mastercard";
    else if (number[0] == '4' && (number.length() == 16 || number.length() == 13)) return "VISA";
    else return "Unknown";
}
