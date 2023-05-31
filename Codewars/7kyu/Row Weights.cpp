#include <vector>
#include <utility>

// https://www.codewars.com/kata/5abd66a5ccfd1130b30000a9/train/cpp
using namespace std; 

pair<int,int> rowWeights (const vector <int> &weights)
{
  pair<int, int> PAIR;
  int first_team {};
  int second_team {};
  
  for (int i {}; i<weights.size(); i++) {
    if (i % 2 == 0) first_team += weights[i];
    else second_team += weights[i];
  }
  PAIR.first = first_team;
  PAIR.second = second_team;
  return PAIR;
}