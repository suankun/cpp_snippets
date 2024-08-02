// https://www.codewars.com/kata/569b5cec755dd3534d00000f/train/cpp
#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
using namespace std;

class NewAverage
{
public:
   static long long newAvg(std::vector<double> &arr, double navg);
};

long long NewAverage::newAvg(std::vector<double> &arr, double navg) {  
    double sum = accumulate(arr.begin(), arr.end(), 0.0);
    double avg = sum / arr.size();
    if (avg>navg) throw std::logic_error("Wrong value!");;
    double res=ceil(((arr.size()+1)*navg)-sum);
    
    return res;
}

int main() {
    std::vector<double> arr1 = {14, 30, 5, 7, 9, 11, 15};
    NewAverage na1;
    cout << na1.newAvg(arr1, 2) << endl;

    std::vector<double> arr2 = {14.0, 30.0, 5.0, 7.0, 9.0, 11.0, 16.0};
    NewAverage na2;
    cout << na2.newAvg(arr2, 90) << endl;  // 628
    
    return 0;
}
//
#include <vector>
#include <numeric>
#include <cmath>

class NewAverage
{
public:
   static long long newAvg(std::vector<double>&, double);
};

long long NewAverage::newAvg(std::vector<double>& dons, double nAvg)
{
    long long newAvg = ceil(nAvg * (dons.size() + 1) - std::accumulate(dons.cbegin(), dons.cend(), 0.0));
    if (newAvg < 0) throw std::logic_error("Negative donation");
    return newAvg;
}
