// https://www.codewars.com/kata/561e9c843a2ef5a40c0000a4/train/cpp
#include <iostream>
#include <vector>
using namespace std;

class GapInPrimes
{
public:
    static std::pair<long long, long long> gap(int g, long long m, long long n);
};

bool is_prime(int i) {
    for (int j = 2; j*j<=i; j++) {
        if (i % j == 0) {
            return false;
        }
    }
    return true;
}

std::pair<long long, long long> GapInPrimes::gap(int g, long long m, long long n){
    int time_saver_flag {};
    int find_flag {};
    std::vector<long long> temp_prime_numbers;
    std::pair<long long, long long> res;

    for (int i = m; i <= n; i++) {

        if (is_prime(i)) {
            temp_prime_numbers.push_back(i);
            time_saver_flag++;
        }

        if (time_saver_flag>=2) {
            if ((temp_prime_numbers[temp_prime_numbers.size()-2]+g)==temp_prime_numbers[temp_prime_numbers.size()-1]) {
                res.first = temp_prime_numbers[temp_prime_numbers.size()-2];
                res.second = temp_prime_numbers[temp_prime_numbers.size()-1];
                find_flag=1;
                break;
            }
        }
    }

    if (find_flag==0) {
        res.first=0;
        res.second=0;
    }

    return res;
}

int main() {
    GapInPrimes one;
    pair res = one.gap(11,30000,100000);  // 0, 0
    cout << res.first << ", " << res.second << endl;

    return 0;
}
///////////////
#include <vector>
class GapInPrimes
{
public:
    static std::pair <long long, long long> gap(int g, long long m, long long n) 
    {
        std::vector<bool> sieve(n,false);
        sieve[0] = sieve[1] = true;
        long long lastprime = 1;
        for(long long i = 2; i<n; i++) {
            if(!sieve[i]) {
                if (lastprime > m && i < n && i - lastprime == g) { 
                    return {lastprime, i};
                } else {
                    lastprime = i;
                    for (int temp = 2*i; temp<n; temp += i)
                        sieve[temp] = true;
                }
            }
        }
        return {0,0};
    };
};