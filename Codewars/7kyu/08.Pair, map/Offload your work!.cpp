// https://www.codewars.com/kata/5b3e1dca3da310a4390000f3/train/cpp
#include <iostream>
using namespace std;

#include <vector>

std::string workNeeded(int projectMinutes, std::vector<std::pair<int, int>> freelancers)
{
    int total_min=0;
    for (size_t i=0; i<freelancers.size(); i++) {
        total_min+=((freelancers[i].first*60) + (freelancers[i].second));
    }
    if (projectMinutes<=total_min) return "Easy Money!";
    int myWork=projectMinutes-total_min;
    int hours=myWork/60;
    int mins =myWork-(hours*60);
    return "I need to work " + std::to_string(hours) + " hour(s) and " + std::to_string(mins) + " minute(s)";
}

int main() {
    std::vector<std::pair<int, int>> w1 = {{1,55}, {0,25}};
    cout << workNeeded(141, w1) << endl;
    // "I need to work 0 hour(s) and 1 minute(s)"

    std::vector<std::pair<int, int>> w2 = {{1,0}};
    cout << workNeeded(60, w2) << endl;
    // "Easy Money!"

    return 0;
}
//
std::string workNeeded(int pm, std::vector<std::pair<int, int>> freelancers)
{
    for (std::pair<int, int> p : freelancers) pm -= p.first*60 + p.second;
    return pm <= 0 ? "Easy Money!" : "I need to work " + std::to_string(pm / 60) + " hour(s) and " + std::to_string(pm % 60) + " minute(s)";
}
