#include <iostream>
#include <string>
using namespace std;

std::string abbrevName(std::string name)
{
  std::string abbr;
  abbr += toupper(name[0]);
  abbr += ".";
  for (int i {}; i < name.length(); i++) {
    if (isspace(name[i])) abbr += toupper(name[i+1]);
  }
  return abbr;
}

int main() {
	cout << boolalpha;
	string result1 = abbrevName("sam Harris"); // S.H
	string result2 = abbrevName("P Favuzzi"); // P.F
	cout << result1 << endl;
	cout << result2 << endl;

    return 0;
}

/////////////////////////////////////////////////////
std::string abbrevName(std::string name)
{
  std::string ret;
  ret.push_back(toupper(name[0]));
  ret.push_back('.');
  ret.push_back(toupper(name[name.find(' ') + 1] ));
  return ret;
}