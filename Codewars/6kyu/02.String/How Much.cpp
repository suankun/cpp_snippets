// https://www.codewars.com/kata/55b4d87a3766d9873a0000d4/train/cpp
#include <iostream>
#include <string>
using namespace std;

class Carboat
{

  public:
  static std::string howmuch(int m, int n);
};

std::string Carboat::howmuch(int m, int n) {
    std::cout << m << ", " << n << std::endl;
    int min {}, max {};
    if (m < n) {
        min = m;
        max = n;
    } else {
        min = n;
        max = m;
    }
    std::string solution  = "[";
    for (int i {min}; i<=max; i++) {
        for (int j {min/9}; j<=max/9+1; j++) {
            for (int k {min/7}; k<=max/7+2; k++) {
                if (i-(j*9)==1 && i-(k*7)==2) {
                    solution += "[M: " + std::to_string(i) + " B: " + std::to_string(k) + " C: " + std::to_string(j) + "]";
                }
            }
        }
    }

    solution += "]";
    return solution;
}

int main()
{
    Carboat one;
    std::cout << one.howmuch(1, 100) << endl;  // "[[M: 37 B: 5 C: 4][M: 100 B: 14 C: 11]]"
    std::cout << one.howmuch(2950, 2950) << endl;  // "[]"
    std::cout << one.howmuch(20000, 20100) << endl;  // "[[M: 20008 B: 2858 C: 2223][M: 20071 B: 2867 C: 2230]]"

    return 0;
}
///////////
#include <algorithm>

class Carboat
{

  public:
  static std::string howmuch(int m, int n)
  {
      int min = std::min(m,n);
      int max = std::max(m,n);
      
      int num = min + 37 - (min % 63);
      num = (num >= min) ? num : num + 63;
      
      /*
       *  There is no need to check every
       *  value. As the cars need to be multiple
       *  of 9 and boats multiple of 7 it is clear
       *  that the answers are always 63 units apart.
       */
      std::string answer ="[";
      for (; num <= max; num += 63)
      {
          answer += "[M: " + std::to_string(num) +
                  " B: " + std::to_string((num - 2)/7) +
                  " C: " + std::to_string((num - 1)/9) + "]";
      }
      answer += "]";
      
      return answer;
  }
};
