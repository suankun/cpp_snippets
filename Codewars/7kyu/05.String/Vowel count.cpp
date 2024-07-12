#include <iostream>
#include <string>
using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  string vowel {"aoueiAOUEI"};
  for (size_t i {}; i < inputStr.length(); i++) {
	for (size_t j {}; j < vowel.length(); j++) {
		if (inputStr[i] == vowel[j]) {
			num_vowels++;
			break;
		}
	}
  }
  return num_vowels;
}

int main() {
	string str {"abracadabra"}; // 5
	cout << getCount(str) << endl;

    return 0;
}

/////////////////////////////////////////////////////

// bool is_vowel(char c) {
//   return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
// }

// int getCount(const string& inputStr) {
//   return count_if(inputStr.begin(), inputStr.end(), is_vowel);
// }