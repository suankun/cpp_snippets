#include <iostream>
#include <string>
using namespace std;

std::string disemvowel(const std::string& str) {
    string vowels {"aoueiAOUEI"}, cleanComment;
	for (auto & ch: str) {
		if (vowels.find(ch) == string::npos) {
			cleanComment += ch;
		}
	}
	return cleanComment;
}

int main() {
	string str {"This website is for losers LOL!"}; // "Ths wbst s fr lsrs LL!"
	cout << disemvowel(str) << endl;

    return 0;
}

/////////////////////////////////////////////////////
// # include <string>
// # include <regex>
// std::string disemvowel(std::string str)
// {
//   std::regex vowels("[aeiouAEIOU]");
//   return std::regex_replace(str, vowels, "");
// }