// https://www.codewars.com/kata/564057bc348c7200bd0000ff/train/cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Thirteen
{
public:
    static long long thirt(long long n);
};

long long Thirteen::thirt(long long n) {
	long long stationary_number {};
	std::string str_n = to_string(n);
	while (n!=0) {
		for (size_t i {}; i<str_n.length(); i++) {
			int temp_num = n%10;
			if(i%6==0) {
				stationary_number+=(temp_num*1);
			} else if (i%6==1) {
				stationary_number+=(temp_num*10);
			} else if (i%6==2) {
				stationary_number+=(temp_num*9);
			} else if (i%6==3) {
				stationary_number+=(temp_num*12);
			} else if (i%6==4) {
				stationary_number+=(temp_num*3);
			} else if (i%6==5) {
				stationary_number+=(temp_num*4);
			}
			n/=10;
		}
		if (str_n==to_string(stationary_number)) break;
		str_n = to_string(stationary_number);
		n = stationary_number;
		stationary_number = 0;
	}
	
	return stationary_number;
}

int main() {
	Thirteen one;
	long long res = one.thirt(1234567);
	cout << res;

	return 0;
}
///////////
class Thirteen
{
public:
    static long long thirt(long long n);
};

long long Thirteen::thirt(long long n){
  int divs[6] = {1, 10, 9, 12, 3, 4};
  while(n >= 100){
    long long aux = n;
    n = 0;
    for(int i = 0; aux != 0; n += (aux%10)*divs[i%6], aux /= 10, i++);
  }
  return n;
}
