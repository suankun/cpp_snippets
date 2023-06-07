// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/
#include <iostream>
#include <string>
using namespace std;
int main() {
	string input_word;
	cin >> input_word;    //Reading input from STDIN
	float z {}, o {};
	for (auto ch: input_word) {
		if (ch=='z') z++;
		else if (ch=='o') o++;
	}
	if (o/z==2) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
