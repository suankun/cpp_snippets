// https://www.codewars.com/kata/564f3d49a06556d27c000077/train/cpp
#include <iostream>

using namespace std;

std::string pattern(int n)
{
    std::string output;
    
    int counter = 0, emptySpace = 1;
    while (n--)
    {
        if (counter < 9)
            counter++;
        else
            counter = 0;

        output += std::string(emptySpace, ' ');

        for (int curr = 0; curr <= n; curr++) {
            output += std::to_string(counter);
            if (curr < n)
                output += ' ';
        }


        if (n > 0)
            output += '\n';

        emptySpace++;
    }
    
    
    return output;
}

int main() {
    // cout << pattern(7) << endl;
    cout << pattern(16) << endl;

    return 0;
}
//
#include <string>
#include <sstream>
std::string pattern(int n)
{
	std::ostringstream oss;

	for (int i = 1; i <= n; ++i)
	{
		oss << std::string(i - 1, ' ');

		for (int j = i; j <= n; ++j)
		{
			oss << ' ' << i % 10;
		}
		if (i != n) oss << '\n';
	}
	return oss.str();
}
