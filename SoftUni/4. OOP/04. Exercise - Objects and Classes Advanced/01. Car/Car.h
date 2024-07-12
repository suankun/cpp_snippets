using namespace std;

class Car {
    string mBrand;
    string mModel;
    int mYear;

    public:
        Car(string & sBrand, string & sModel, int & nYear) 
            : mBrand(sBrand), mModel(sModel), mYear(nYear) {}

        string GetBrand() const {
            return mBrand;
        }

        string GetModel() const {
            return mModel;
        }

        int GetYear() const {
            return mYear;
        }

};

