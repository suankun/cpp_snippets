// https://www.codewars.com/kata/57f625992f4d53c24200070e/train/cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include <string>
#include <vector>

std::string bingo(std::vector<std::pair<std::string, int>> ticket, int win)
{
    int count {};
    for (size_t i {}; i<ticket.size(); i++) {
        for (size_t j {}; j<ticket[i].first.length(); j++) {
            if (ticket[i].first[j]==ticket[i].second) {
                count++;
                break;
            }
        }
    }
    
    return count >= win ? "Winner!" : "Loser!";
}

int main() {
    typedef std::pair<std::string, int> p;
    // cout << bingo({p("ABC", 65), p("HGR", 74), p("BYHT", 74)}, 1) << endl;  // "Winner!"
    cout << bingo({p("KDVXT", 85), p("IWEYQQGI", 73), p("KBAJBZN", 68), p("LPXFAJ", 85), p("HFQ", 67), p("FNGUC", 87)},  2) << endl;  // "Loser!"
    
    return 0;
}
//
std::string bingo(std::vector<std::pair<std::string, int>> ticket, int win)
{
	  int counter = 0;
  	for(auto i: ticket){
  		for(auto j: i.first){
  			if(int(j) == i.second) {
  				counter++;
  				break;
  			}
  		}
  	}
  	return win > counter? "Loser!" : "Winner!";
}
