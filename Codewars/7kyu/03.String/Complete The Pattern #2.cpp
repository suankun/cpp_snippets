// https://www.codewars.com/kata/55733d3ef7c43f8b0700007c/train/cpp
#include <iostream>
using namespace std;

#include <string>

std::string pattern(int n)
{
  if (n < 1) return "";
	std::string s;
	for (int i=0; i<n; ++i)
	{
		for (int j=n; j>i; --j)
		{
			s+=std::to_string(j);
		}
		s+="\n";
	}
	s.pop_back();
	return s;
}

int main() {
    // cout << pattern(3) << endl;  //  "321\n32\n3"
    cout << pattern(13) << endl;
    // "13121110987654321
    // 1312111098765432
    // 131211109876543
    // 13121110987654
    // 1312111098765
    // 131211109876
    // 13121110987
    // 1312111098
    // 131211109
    // 13121110
    // 131211
    // 1312
    // 13"

    return 0;
}
//
std::string pattern( int n ) {
    if ( n < 1 ) return {};
    std::string s;
    for ( int r{ 1 }; r <= n; ++r, s += '\n' )
        for ( int c{ n }; c >= r; --c )
        s += std::to_string( c );
    return s.pop_back(), s;
}
