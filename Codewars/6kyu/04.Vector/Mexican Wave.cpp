// https://www.codewars.com/kata/58f5c63f1e26ecda7e000029/train/cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

std::vector<std::string> wave(std::string y){
    std::vector<std::string> result;
    for (size_t i {}; i<y.length(); i++) {
        std::string temp_word;
        if (y[i]==' ') continue;
        for (size_t j {}; j<y.length(); j++) {
            if (j==i) temp_word+=std::toupper(y[j]);
            else temp_word+=y[j];
        }
        result.push_back(temp_word);
    }
    return result;
}

int main()
{
    std::string one = "two words";
    vector<string> res = wave(one);  // "Two words", "tWo words", "twO words", "two Words", "two wOrds", "two woRds", "two worDs", "two wordS"

    for (auto word: res) std::cout << word << ' ';

    return 0;
}
//////////
using namespace std;
std::vector<std::string> wave(std::string x){
  vector <string> op;
  string temp=x;
  for(int i=0;i<x.length();i++)
  {
    if(x[i]==' ')continue;
    temp[i] = toupper(temp[i]);
    op.push_back(temp);
    temp=x;
  }
  return op;

}
