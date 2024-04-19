// https://www.codewars.com/kata/5506b230a11c0aeab3000c1f/train/cpp
#include <iostream>
using namespace std;

class Evaporator
{

  public:
  static int evaporator(double content, double evap_per_day, double threshold);
};

int Evaporator::evaporator(double content, double evap_per_day, double threshold) {
    int days {};
    double condition = content*(threshold/100);
    while (content>=condition) {
        content -= (content*(evap_per_day/100));
        days++;
    }
    
    return days;
}

int main() {
    double content {10}, evap_per_day {10}, threshold {5}; // 29
    Evaporator one;
    cout << one.evaporator(content, evap_per_day, threshold) << endl;

    return 0;
}
//
// #include <cmath>

// using namespace std;
// class Evaporator
// {

//   public:
//   static int evaporator(double content, double evap_per_day, double threshold);
// };

// int Evaporator::evaporator(double content, double evap_per_day, double threshold)
// {
//   // Finding N in (1.0-evap_per_day) to the N is less than threshold
//   // Which is logarithm of threshold in base (1.0-evap_per_day), rounded up
//   // C++ stdlib doesn't give you arbitrary log, but log of N in base B == logN/logB for any base
//   // Also, don't forget that the percentages are being given as read (i.e. 10) not real numbers (0.1)
//   return ceil(log(threshold/100.0)/log(1.0-(evap_per_day/100.0)));
// }