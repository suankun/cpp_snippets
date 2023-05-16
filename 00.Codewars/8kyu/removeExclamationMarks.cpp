#include <iostream>
#include <string>
using namespace std;

std::string removeExclamationMarks(std::string str){
   	std::string result;
  	for (size_t i {}; i < str.length(); i++){
   		if (str[i] != '!') {
			result += str[i];
		}
	}
  	return result;
}

int main() {
	string str {"Hello World!"}; // "Hello World"
	cout << removeExclamationMarks(str) << endl;

	string str1 {"Hi!!! Hello!"}; // "Hi Hello"
	cout << removeExclamationMarks(str1) << endl;
    
    return 0;
}

/////////////////////////////////////////////////////
// std::string removeExclamationMarks(std::string str){
//   str.erase(std::remove(str.begin(), str.end(), '!'), str.end());
//   return str;
// }