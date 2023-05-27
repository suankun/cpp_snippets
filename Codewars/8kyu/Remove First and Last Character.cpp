// https://www.codewars.com/kata/56bc28ad5bdaeb48760009b0/train/cpp
#include <iostream>
#include <string>
using namespace std;

string sliceString (string str )
{
  string res;
  for (int i {1}; i < str.length()-1; i++) res.push_back(str[i]);
  return res; 
}

int main() {
    string res = sliceString("tuna"); // un
    cout << res << endl;

    return 0;
}

//////////////
#include <string>
using namespace std; 

string sliceString (string str ){
  return str.substr(1, str.size() - 2); 
}
////////////
#include <string>
using namespace std; 

string sliceString (string str )
{
  return string(str.begin()+1,str.end()-1) ; 
}