#include <iostream>
using namespace std;

bool isPrime(unsigned int num) {
    for (unsigned int i=2; i<num/2; i++) {
        if (num%i==0) return true;
    }
    return false;
}

unsigned int oddNotPrime(unsigned int n){
    // result variable for counting the numbers that are odd but not prime
    unsigned int res=1;

    // loop through the odd numbers up to 'n'
    for (unsigned int i=1; i<=n; i+=2) {
        // check if the number is prime
        if (isPrime(i)) res++;
    }
    
    return res;
}

int main() {
    cout << oddNotPrime(5) << endl;   // (1)
    cout << oddNotPrime(10) << endl;  // (2)
    cout << oddNotPrime(99) << endl;  // (26)
    cout << oddNotPrime(9) << endl;   // (2)
    cout << oddNotPrime(1) << endl;   // (1)

    return 0;
}
//
bool prime(const unsigned n) {
  if (n<2) return false;
  for (unsigned f=3; f*f<=n; f+=2)
    if (!(n%f)) return false;
  return true;
}
unsigned oddNotPrime(unsigned n) {
  unsigned c=1;
  for (unsigned i=3; i<=n; i+=2)
    if (!prime(i)) ++c;
  return c;
}
