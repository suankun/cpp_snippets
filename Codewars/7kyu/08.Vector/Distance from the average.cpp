// https://www.codewars.com/kata/568ff914fc7a40a18500005c/train/cpp
#include <iostream>
#include <vector>
using namespace std;

std::vector<double> distancesFromAverage(std::vector<int> input)
{
    std::vector<double> res;

    // Find the average..
    double sum=0.0;
    for (auto n: input) sum+=n;
    double avg=sum/input.size();

    // Calc the differences and push them in the res vector.
    for (auto n: input) {
        double temp=avg-n;
        res.push_back(temp);
    }

    return res;
}

int main() {
    std::vector<double> dist = distancesFromAverage({55, 95, 62, 36, 48});  // 4.2, -35.8, -2.8, 23.2, 11.2, avg=59.2
    for (auto n: dist) cout << n << ' ';
    cout << endl;
    
    return 0;
}
//
#include <numeric>
std::vector<double> distancesFromAverage(std::vector<int> input)
{
    double avg = accumulate(input.begin(), input.end(), 0) * 1.0 / input.size();
    std::vector<double>  result;
    for(auto i: input)  result.push_back(avg - i);
    return result;
}
