// https://www.codewars.com/kata/56484848ba95170a8000004d/train/cpp
#include <iostream>
#include <vector>
using namespace std;

class GpsSpeed
{
public:
    static int gps(int s, std::vector<double> &x) {
        if (x.size()<=1) return 0;
        int maxSpeed {};
        for (size_t i {}; i<x.size()-1; i++) {
            int temp_speed = (3600 * (x[i+1]-x[i])) / s;
            if (temp_speed>maxSpeed) maxSpeed=temp_speed;
        }
        return maxSpeed;
    };
};

int main() {
    std::vector<double> x = {0.0, 0.19, 0.5, 0.75, 1.0, 1.25, 1.5, 1.75, 2.0, 2.25};

    GpsSpeed one {};
    cout << one.gps(15, x) << endl;  // 74

    return 0;
}
