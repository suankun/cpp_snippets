// https://www.codewars.com/kata/592edfda5be407b9640000b2/train/cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Kata
{
public:
	static string Decode(vector<int> code, int n)
	{
        string decoded_msg;
        string key=std::to_string(n);
        string key_full;
        int key_len=key.length();
        for (size_t i=0; i<code.size(); i++) {
            key_full+=key[i%key_len];
        }
        for (size_t i=0; i<code.size(); i++) {
            char temp=(code[i]-(key_full[i]-'0'))+('a'-1);
            decoded_msg+=temp;
        }
        
		return decoded_msg;
	}
};

int main() {
    Kata k;
    cout << k.Decode({20, 12, 18, 30, 21},1939) << endl;  // "scout"
    cout << k.Decode({14, 10, 22, 29, 6, 27, 19, 18, 6, 12, 8},1939) << endl;  // "masterpiece"
    cout << k.Decode({3, 13, 26, 17, 9, 10, 25, 14, 25, 28, 6, 22, 7, 8, 28, 14, 7, 8, 4, 20, 10, 13, 14, 12, 8, 22, 18, 5,},15014) << endl;
    //bhzpeitnxxeqggxmbhcpihnkdume

    return 0;
}
//
using namespace std;
class Kata{
public:
	static string Decode(vector<int> code, int n){
    string res(""), s = to_string(n);
    for (int i = 0; i < code.size(); ++i) {
      code[i] -= s[i % s.size()] - '0';
      res.push_back(char(code[i] + 96));
    }
    return res;
	}
};
