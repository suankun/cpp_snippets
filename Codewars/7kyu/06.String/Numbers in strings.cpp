// https://www.codewars.com/kata/59dd2c38f703c4ae5e000014/train/cpp
#include <iostream>
#include <string>
using namespace std;

int solve(std::string s){
    int max = 0;
    int currentNumber = 0;

    for (char ch : s) {
        if (isdigit(ch)) {
            currentNumber = currentNumber * 10 + (ch - '0');
        } else {
            if (max < currentNumber) max = currentNumber;
            currentNumber = 0;
        }
    }

    if (max < currentNumber) max = currentNumber;

    return max;
}

int main() {
    cout << solve("gh12cdy695m1") << endl;  // 695
    cout << solve("2ti9iei7qhr5") << endl;  // 9
    cout << solve("lu1j8qbbb85") << endl;  // 85
    cout << solve("185lu1j8qbbb85") << endl;  // 185

    return 0;
}
//
int solve(std::string s){
    int max = 0;
    std::string tmp("");
    for(int i = 0; i < s.length() + 1; ++i){
        if(isdigit(s[i]))
        {
            tmp += s[i];
            continue;
        }
        if(!tmp.empty()){
            if(std::stoi(tmp) > max){
                max = std::stoi(tmp);
            } 
            tmp = "";
        }
    }
    
    return max;
}
//
int solve(std::string s){
  int max = 0 ; 
  int i =0 ; 
  while(s[i]!='\0'){
    int num = 0 ; 
    while(s[i]>='0' && s[i]<='9'){
      num = num*10 + s[i] -'0' ;
      i++ ;
    }
    if(max<num) max = num ; 
    i++ ; 
  }
  return max ;
}
