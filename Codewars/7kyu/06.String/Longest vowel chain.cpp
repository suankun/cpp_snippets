// https://www.codewars.com/kata/59c5f4e9d751df43cf000035/train/cpp
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int solve(string s){
	int max = 0;
    std::string vowel = {"aouei"};
    for (size_t i {}; i<s.length(); i++) {
        int temp_max = 0;
        if (vowel.find(s[i]) != std::string::npos) {
            for (size_t j {i}; j<s.length(); j++) {
                if (vowel.find(s[j]) == std::string::npos) {
                    i = j;
                    break;
                } 
                temp_max++;
            }
        }
        if (max < temp_max) max = temp_max;
    }
    return max;
}

int main() {
    cout << solve("ultrarevolutionariees") << endl; // 3

    return 0;
}
//
using namespace std;


int solve(string s){
	
  int count = 0;
  int best = 0;
  for(int i=0;i<s.length();i++)
  {
     if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') count++;
        else count = 0;
   
     best = max(best, count);
  }
  
  return best;
}
