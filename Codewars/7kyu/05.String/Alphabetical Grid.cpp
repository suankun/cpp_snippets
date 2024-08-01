// https://www.codewars.com/kata/60a94f1443f8730025d1744b/train/cpp
#include <string>

std::string grid(int n) {
  std::string gridRes = "";
  char ch = 'a';
  for (int row = 0; row < n; row++) {
    std::string curRow;
    
    bool isFirst = true;
    
    char curCh = ch;
    for (int col = 0; col < n; col++) {
      if (!isFirst)
          curRow += ' ';
      else
          isFirst = false;
      
      curRow += curCh;
      curCh += 1;
      
      if (curCh > 'z')
        curCh = 'a';
    }
    
    ch += 1;
    if (ch > 'z')
        ch = 'a';
    
    if (row == n - 1) {
      gridRes += curRow;
    }
    else
      gridRes += curRow + '\n';
    
  }
  
  return gridRes;
}
//
#include <string>

std::string grid(int n) {
    std::string s = "abcdefghijklmnopqrstuvwxyz";
    std::string ans;
    if(n < 0)
        return "";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ans += s[(i + j) % 26];
            ans += j == n - 1 ? "" : " ";
        }
        ans += i == n - 1 ? "" : "\n";
    }
    return ans;
}
