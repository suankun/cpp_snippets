// https://www.codewars.com/kata/55908aad6620c066bc00002a/train/cpp
#include <iostream>
#include <string>
using namespace std;

bool XO(const std::string& str)
{
    int x {}, o {};
    std::string work_str;
    for (auto ch: str) {
        if (tolower(ch)=='x') {
            x++;
        } else if (tolower(ch)=='o') {
            o++;
        }
    }
    
    return x==o ? true : false;
}

int main() {
    std::string one {"ooxXm"}; // true
    std::cout << boolalpha;
    std::cout << XO(one);

    return 0;
}
//
#include <string>

bool XO(const std::string& str)
{
	int counter = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'x' || str[i] == 'X')
			counter++;

		if (str[i] == 'o' || str[i] == 'O')
			counter--;
	}

	return counter == 0;
}
