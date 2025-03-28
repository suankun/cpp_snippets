// https://www.codewars.com/kata/5b6c220fa0a661fbf200005d/train/cpp
#include <vector>
#include <string>
#include <sstream>
#include <map>

std::vector<int> scoreboard(const std::string &s) {
    std::map<std::string, int> numberWords = {
        {"nil", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, 
        {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}
    };

    std::vector<int> scores(2, 0);

    std::istringstream iss(s);
    std::string word;

    int teamIndex = 0;

    while (iss >> word) {
        if (numberWords.find(word) != numberWords.end()) {
            scores[teamIndex] = numberWords[word];
            teamIndex = 1 - teamIndex;
        }
    }

    return scores;
}
//
#include <vector>
#include <string>

std::vector<int> scoreboard(const std::string &s) {
  std::vector<std::string> vec { "nil", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
  
  std::string       line;
  std::stringstream str(s);
  std::vector<int>  score;
  
  while( std::getline( str, line, ' ' ) ){
    for( int i = 0; i < vec.size(); i++ ){
      if( line.compare(vec[i]) == 0 ){ 
        score.push_back(i);
        break;
      }
    }
  }
  
  return score;
}
