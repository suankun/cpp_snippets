// https://www.codewars.com/kata/56b0f5f84de0afafce00004e/train/cpp
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
using V = std::vector<int>;

std::vector<int> relativelyPrime(int n, std::vector<int> list){
    std::vector<int> result;
    for (int num : list) {
        if (std::gcd(n, num) == 1) {
            result.push_back(num);
        }
    }
    return result;
}

void printVector(const std::vector<int>& v) {
    for (const int& n : v)
        cout << n << ' ';
    cout << endl;
}

int main()
{

    std::vector<int> res1 = relativelyPrime(8, V{1,2,3,4,5,6,7});           
    printVector(res1);  // Equals(V{1,3,5,7}));

    std::vector<int> res2 = relativelyPrime(15, V{72,27,32,61,77,11,40});
    printVector(res2);  // Equals(V{32,61,77,11}));

    std::vector<int> res3 = relativelyPrime(210, V{15,100,2222222,6,4,12369,99});
    printVector(res3); // Equals(V{}));

    std::vector<int> res4 = relativelyPrime(99, V{});
    printVector(res4); // Equals(V{}));

    std::vector<int> res5 = relativelyPrime(1, V{2,3,4,5,6,7,8,9,10});
    printVector(res5); // Equals(V{2,3,4,5,6,7,8,9,10}));

    return 0;
}
//
#include <vector>

using namespace std;

int commonGreatestFactor(int number1, int number2)
{
    for(int i = min(number1, number2); i > 0; i--)
    {
        if(number1 % i == 0 && number2 % i == 0)
            return i;
    }

    return 1;
}

vector<int> relativelyPrime(int n, vector<int> list)
{
    vector<int> final_l;

    for(auto number: list)
    {
        if(commonGreatestFactor(n, number) == 1)
        {
            final_l.push_back(number);
        }
    }

    return final_l;
}
