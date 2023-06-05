#include <iostream>
using namespace std;

class Arge
{
  public:
  static int nbYear(int p0, double percent, int aug, int p);
};

int Arge::nbYear(int p0, double percent, int aug, int p) {
  int needed_years {};
  double percentage = percent/100;
  while(p0<p) {
    p0 += static_cast<double>(p0)*percentage+aug;
    needed_years++;
  }
  return needed_years;
}

int main() {
	Arge one;
	int result = one.nbYear(1500, 5, 100, 5000); // 15
	cout << result << endl;

    return 0;
}

/////////////////////////////////////////////////////
class Arge
{
public:
    static int nbYear(int p0, double percent, int aug, int p)
    {
        //p0 = starting population
        //percent = percent increase per year
        //aug = new arrivals per year
        //p = final population (when p0 reaches this number, end.)
        int years(0);
        while (p0 < p)
        {
            p0 += (p0 * (percent / 100)) + aug;
            years++;
        }
        return years;
    }
    
};