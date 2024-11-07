// https://www.codewars.com/kata/5a946d9fba1bb5135100007c/train/cpp
#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    if (n%2 == 0 || n%3 == 0) return false;
   
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
   
    return true;
}
 
int nextPrime(int N)
{
    if (N <= 1)
        return 2;
 
    int prime = N;
    bool found = false;
 
    while (!found) {
        prime++;
 
        if (isPrime(prime))
            found = true;
    }
 
    return prime;
}

int minimumNumber (vector <int> numbers )
{
    int min_number {}, sum {};
    for (auto num: numbers) sum+=num;
    if (isPrime(sum)) return 0;
    min_number=nextPrime(sum)-sum;
    
    return min_number;
}

int main() {
    vector<int> nums {3,1,2};  // 1
    cout << minimumNumber(nums) << endl;

    return 0;
}
//
// int isPrime (int n) {
//    int i=2;
//    while (i*i<=n) if (n%i++==0) return 0;
//    return n!=2;
// }

// int minimumNumber (std::vector <int> n)
// {
//   int c=0, p=0;
//   for (int i=0;i<n.size();i++) c+=n[i];
//   while (!isPrime(c++)&&++p);
//   return p;
// }
