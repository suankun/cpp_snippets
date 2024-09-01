// https://www.codewars.com/kata/554a44516729e4d80b000012/train/cpp
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;	

class BuyCar {
public:
    static std::vector<int> nbMonths(int startPriceOld, int startPriceNew, int savingPerMonth, double percentLossByMonth);
};

std::vector<int> BuyCar::nbMonths(int startPriceOld, int startPriceNew, int savingPerMonth, double percentLossByMonth) {
    std::vector<int> result;
    int monthsNeeded = 0;
    double currentSavings = 0;
    double currentPriceOld = startPriceOld;
    double currentPriceNew = startPriceNew;
    
    if (startPriceOld >= startPriceNew) {
        result.push_back(0);
        result.push_back(startPriceOld - startPriceNew);
    } else {
        do {
            currentSavings += savingPerMonth;

            monthsNeeded++;
            
            if (monthsNeeded % 2 == 0) {
                percentLossByMonth += 0.5;
            }

            currentPriceOld -= currentPriceOld * (percentLossByMonth / 100.0);
            currentPriceNew -= currentPriceNew * (percentLossByMonth / 100.0);
                        
            double totalSavings = currentSavings + currentPriceOld - currentPriceNew;
            
            if (totalSavings >= 0) {
                result.push_back(monthsNeeded);
                result.push_back(std::round(totalSavings));
                break;
            }
        } while (true);
    }
    
    return result;
}

int main() {
    BuyCar one;
    vector<int> result = one.nbMonths(2000, 8000, 1000, 1.5);  // 6, 766
    for (auto num: result) cout << num << ' ';
    cout << endl;

	return 0;
}
/////////////////
#include <iostream>
#include <cmath>

class BuyCar
{

  public:
   static std::vector<int> nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth) {
      double savings = 0.0;
      double old_car = startPriceOld;
      double new_car = startPriceNew;
      double month = 0.0;
      double percentage;
      
      while( std::floor(old_car + savings - new_car)<0 ) {
         month++;
         percentage = percentLossByMonth + std::floor(month*0.5)*0.5;
         savings+=savingperMonth;
         old_car *= 1.0-percentage * 0.01;
         new_car *= 1.0-percentage * 0.01; 
      }
      
      return std::vector<int>() = { (int)month, (int)std::round(old_car + savings - new_car) };
   }
};
