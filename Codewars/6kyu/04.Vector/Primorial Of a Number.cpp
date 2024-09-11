// https://www.codewars.com/kata/5a99a03e4a6b34bb3c000124/train/cpp
#include <iostream>
#include <vector>
using namespace std;

unsigned long long numPrimorial (unsigned short int number) {
    std::vector<unsigned long long> res;
    for (int i {2}; i<4294967295; i++) {
        int j {};
        for (j = 2; j<i; j++) {
            if (i%j==0) break;
        }
        if (j==i) res.push_back(i);
        if (res.size()==number) break;
    }

    unsigned long long total {1};
    for (auto n: res) total *= n;

    return total;
}

int main()
{
    cout << numPrimorial(5) << endl;  // 2310
    return 0;
}
//
unsigned long long numPrimorial (unsigned short int number )
{
    int prime_count = 1;
    long long total = 2;
    int is_prime = 2;
    
    while (prime_count<number) {
            for (int j=2; j*j<is_prime+2; ++j) {
                if (is_prime%j==0) {//is not prime
                    break;
                }
                else if ((j+1)*(j+1)>is_prime) {
                    std::cout<<is_prime;
                    prime_count++;
                    total *= is_prime;
                }
            }
        is_prime++;
    }
  
    return total ;
}
//
unsigned long long numPrimorial (unsigned short int number )
{
    unsigned long long arr[]={1, 2, 6, 30, 210, 2310, 30030, 510510, 9699690, 223092870, 6469693230, 200560490130} ;
    return arr[number];
}
