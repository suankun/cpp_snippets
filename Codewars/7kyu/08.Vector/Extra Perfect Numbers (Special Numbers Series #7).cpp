// https://www.codewars.com/kata/5a662a02e626c54e87000123/train/cpp
#include <vector>
using namespace std; 

vector <int> extraPerfect ( int number )
{ 
    vector <int> res;
    for (int i=1; i<=number; i+=2) res.push_back(i);
    return res ;
}
//
#include <vector>

std::vector<int> extraPerfect(int n)
{
    std::vector<int> result;
    result.reserve((n + 1) / 2);
    for (int i = 1; i <= n; i += 2)
        result.push_back(i);
    return result;
}
