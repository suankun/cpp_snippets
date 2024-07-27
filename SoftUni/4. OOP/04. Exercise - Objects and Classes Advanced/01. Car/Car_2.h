#ifndef CAR_H 
#define CAR_H 

#include <string>
using namespace std;

class Car {
    string sBrand, sModel;
    int nYear;

public:
    Car (string & sBrand, string & sModel, int nYear)
        : sBrand(sBrand), sModel(sModel), nYear(nYear) {}

    const string GetBrand() const { return sBrand; }

    const string GetModel() const { return sModel; }

    const int GetYear() const { return nYear; }

};
 
#endif // !CAR_H