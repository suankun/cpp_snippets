// https://www.codewars.com/kata/57ed4cef7b45ef8774000014/train/cpp

// Every now and then people in the office moves teams or departments. Depending what people are doing with their time they can become more or less boring. Time to assess the current team.

// You will be provided with an object(staff) containing the staff names as keys, and the department they work in as values.

// Each department has a different boredom assessment score, as follows:

// accounts = 1
// finance = 2
// canteen = 10
// regulation = 3
// trading = 6
// change = 6
// IS = 8
// retail = 5
// cleaning = 4
// pissing about = 25

// Depending on the cumulative score of the team, return the appropriate sentiment:

// <=80: 'kill me now'
// < 100 & > 80: 'i can handle this'
// 100 or over: 'party time!!'

#include <iostream>
#include <map>
#include <string>

using namespace std;

std::string boredom(const std::map<std::string, std::string> &staff){
    int totalScore = 0;

    for (const std::pair<std::string, std::string> & p : staff) {
        if (p.second == "accounts")
            totalScore += 1;
        else if (p.second == "finance")
            totalScore += 2;
        else if (p.second == "regulation")
            totalScore += 3;
        else if (p.second == "cleaning")
            totalScore += 4;
        else if (p.second == "retail")
            totalScore += 5;
        else if (p.second == "trading" || p.second == "change")
            totalScore += 6;
        else if (p.second == "IS")
            totalScore += 8;
        else if (p.second == "canteen")
            totalScore += 10;
        else if (p.second == "pissing about")
            totalScore += 25;
    }

    return totalScore <= 80 ? "kill me now" : totalScore >= 100 ? "party time!!" : "i can handle this";
}

int main() {

    using Staff = std::map<std::string, std::string>;
    Staff map1 = { {"tim","change"}, {"jim","accounts"},
        {"randy","canteen"}, {"sandy","change"}, {"andy","change"}, {"katie","IS"},
        {"laura","change"}, {"saajid","IS"}, {"alex","trading"}, {"john","accounts"},
        {"mr","finance"} };
    cout << boredom(map1) << endl;
    // ("kill me now")

    Staff map2 = { {"tim","IS"}, {"jim","finance"},
        {"randy","pissing about"}, {"sandy","cleaning"}, {"andy","cleaning"},
        {"katie","cleaning"}, {"laura","pissing about"}, {"saajid","regulation"},
        {"alex","regulation"}, {"john","accounts"}, {"mr","canteen"} };
    cout << boredom(map2) << endl;
    // ("i can handle this")

    Staff map3 = { {"tim","accounts"}, {"jim","accounts"},
        {"randy","pissing about"}, {"sandy","finance"}, {"andy","change"},
        {"katie","IS"}, {"laura","IS"}, {"saajid","canteen"}, {"alex","pissing about"},
        {"john","retail"}, {"mr","pissing about"} };
    cout << boredom(map3) << endl;
    // ("party time!!")

    return 0;
}
