// https://www.codewars.com/kata/586a1af1c66d18ad81000134/train/cpp
#include <iostream>
#include <array>
#include <string>
#include <algorithm>

using namespace std;

string driver(const array<string, 5> &data) {
    const array<string, 12> months = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    string forename = data[0];
    string middleName = data[1]; // (if any)
    string surname = data[2];
    string dOB = data[3]; // (In the format Day Month Year, this could include the full Month name or just shorthand i.e., September or Sep)
    string gender = data[4]; // M-Male or F-Female
    string license = "";

    auto get0105 = [&]() {
        string firstFive = surname.substr(0, 5);
        transform(firstFive.begin(), firstFive.end(), firstFive.begin(), ::toupper);
        while (firstFive.length() < 5) {
            firstFive += '9';
        }
        cout << firstFive << endl;
        return firstFive;
    };

    auto get06 = [&]() {
        char decade = dOB[dOB.length() - 2];
        cout << decade << endl;
        return string(1, decade);
    };

    auto get0708 = [&]() {
        string month = dOB.substr(3, 3);
        for (int x = 0; x < 12; x++) {
            if (month == months[x]) {
                if (gender == "F") {
                    cout << month << ", " << gender << ", " << (x + 51) << endl;
                    return to_string(x + 51);
                } else {
                    int monthNum = x + 1;
                    string monthStr = (monthNum < 10) ? "0" + to_string(monthNum) : to_string(monthNum);
                    cout << month << ", " << gender << ", " << monthStr << endl;
                    return monthStr;
                }
            }
        }
        return string(""); // Return empty string if month not found
    };

    auto get0910 = [&]() {
        return dOB.substr(0, 2);
    };

    auto get11 = [&]() {
        char yearDigit = dOB[dOB.length() - 1];
        return string(1, yearDigit);
    };

    auto get1213 = [&]() {
        char firstInit = forename[0];
        char middleInit = (middleName.length() > 0) ? middleName[0] : '9';
        return string(1, firstInit) + string(1, middleInit);
    };

    auto get14 = [&]() {
        return string("9");
    };

    auto get1516 = [&]() {
        return string("AA");
    };

    license = get0105() + get06() + get0708() + get0910() + get11() + get1213() + get14() + get1516();

    return license;
}
//
#include <array>
#include <unordered_map>

using namespace std;

string driver(const array<string, 5> &data)
{
    unordered_map<string, string> maleMon = {{"Jan","01"},{"Feb","02"},{"Mar","03"},{"Apr","04"},{"May","05"},{"Jun","06"},{"Jul","07"},{"Aug","08"},{"Sep","09"},{"Oct","10"},{"Nov","11"},{"Dec","12"}};
    unordered_map<string, string> femMon = {{"Jan","51"},{"Feb","52"},{"Mar","53"},{"Apr","54"},{"May","55"},{"Jun","56"},{"Jul","57"},{"Aug","58"},{"Sep","59"},{"Oct","60"},{"Nov","61"},{"Dec","62"}};
    string res;
    //1-5
    if(data[2].length() >= 5)  res += data[2].substr(0,5);
    else res += data[2] + string(5 - data[2].length(), '9');
    //6
    unsigned int decDig = 0;
    decDig = data[3].length() - 2;
    res += data[3][decDig];
    //7-8
    string month = data[3].substr(3,3);
    if(data[4] == "M")  res += maleMon[month];
    else res += femMon[month];
    //9-10
    res += data[3].substr(0,2);
    //11
    res += data[3].back();
    //12-13
    res += data[0][0];
    if(data[1].empty()) res += "9";
    else res += data[1][0];
    //14-16
    res += "9AA";
    for(auto &c: res) c = toupper(c);
    return res;
}
