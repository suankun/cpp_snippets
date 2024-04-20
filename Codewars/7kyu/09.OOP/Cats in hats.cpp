// https://www.codewars.com/kata/57b5907920b104772c00002a/train/cpp
#include <iostream>
#include <iomanip>
using namespace std;

class Kata
{
public:
    std::string height(int n);
};

std::string Kata::height(int n) {
    std::cout << n << std::endl;
    double cat_height {2000000};
    double current_height {2000000};
    for (int i {}; i<n; i++) {
        double temp_height = current_height/2.5;
        current_height = temp_height;
        cat_height += temp_height;
    }
    std::ostringstream height;
    height << std::fixed << std::setprecision(3) << cat_height;
    return height.str();
}

int main() {
    Kata one;
    cout << one.height(7) << endl;  // "3331148.800"
    return 0;
}
//
#include <iomanip>
#include <cmath>

using namespace std;
class Kata
{

public:
    string height(int n)
    {         
         double d = (2000000*(1-(pow(0.4,n+1))))/(1-0.4);
         ostringstream oss;
         oss << fixed << setprecision(3) << d;
        
        return oss.str();
    }
};
