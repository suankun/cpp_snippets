#include <iostream>
using namespace std;

// https://www.codewars.com/kata/57a2013acf1fa5bfc4000921/solutions/cpp

#include <vector>
#include <bits/stdc++.h>

double calcAverage(const std::vector<int>& values){
  return (accumulate(values.begin(), values.end(), 0))/static_cast<double>(values.size());
}
int main() {
    vector <int> numbers {3,2,5,1};
    double mean = calcAverage(numbers);
    cout << mean << endl;
    return 0;
}

//////////////
#include <vector>
#include <numeric>
using namespace std; 

double calcAverage(const vector<int>& values){
  return accumulate(values.begin(),values.end(), 0.0) / values.size();
}