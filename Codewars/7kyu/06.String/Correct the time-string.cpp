// https://www.codewars.com/kata/57873ab5e55533a2890000c7/train/cpp
#include <iostream>
#include <string>
using namespace std;

void addZero(std::string& res, int& temp) {
    if (temp<10) res+='0';
}

bool isOnlyDigits(const std::string& str) {
    for (char c: str) if (!std::isdigit(c)) return false;
    return true;
}

std::string correct(std::string timeString)
{
    if (timeString.length()!=8) return "";
    if (timeString[2]!=':' && timeString[5]!=':') return "";
    int seconds=0;

    std::string temp=timeString.substr(0, 2);
    for (int i=0; i<3; i++) {
        int div=(i==0) ? 3600 : i==1 ? 60 : 1;
        temp=timeString.substr(3*i, 2);
        if (!isOnlyDigits(temp)) return "";
        seconds+=(stoi(temp)*div);
    }

    seconds%=86400;  // one day has 86400 seconds

    std::string res;
    int temp_sec=0;
    for (int i=0; i<3; i++) {
        int div=(i==0) ? 3600 : i==1 ? 60 : 1;
        temp_sec=seconds/div;
        addZero(res, temp_sec);
        res+=std::to_string(temp_sec);
        if (i==2) break;
        res+=':';
        seconds-=((seconds/div)*div);
    }

    return res;
}

int main() {
    // EmptyTest
    cout << correct("") << endl;  // ""
    
    // InvalidFormatTests
    cout << correct("001122") << endl;  // ""
    cout << correct("00;11;22") << endl;  // ""
    cout << correct("0a:1c:22") << endl;  // ""

    // CorrectionTests
    cout << correct("09:10:01") << endl;  // "09:10:01"
    cout << correct("11:70:10") << endl;  // "12:10:10"
    cout << correct("19:99:99") << endl;  // "20:40:39"
    cout << correct("24:01:01") << endl;  // "00:01:01"
    cout << correct("52:01:01") << endl;  // "04:01:01"

    return 0;
}
//
#include <regex>
#include <string>

std::string correct(std::string timeString)
{ 
    std::regex mask("(\\d\\d):(\\d\\d):(\\d\\d)");
    std::cmatch cm;
    
    if (std::regex_match(timeString.c_str(),cm,mask))
    {
      int h = atoi(cm[1].first);
      int m = atoi(cm[2].first);
      int s = atoi(cm[3].first);
      
      m += s/60;
      h += m/60;
      s %= 60;
      m %= 60;
      h %= 24;
      
      char result[9];
      sprintf(result,"%02d:%02d:%02d",h,m,s);
      return std::string(result);
      
    }
    
    return "";
}
