#include <iostream>
#include <vector>
using namespace std;

#include <string>

std::string highestScoringWord(const std::string &str) {

    // put all words in vector
    std::string word;
    std::vector<std::string> separate_words;
    for (auto ch: str) {
        if (ch == ' ') {
            separate_words.push_back(word);
            word = "";
        } else {
            word += ch;
        }
    }
    separate_words.push_back(word);

    // count and compare the points for every word
    std::string word_with_max_points;
    int max_points {};
    for (auto word: separate_words) {
        int points {};
        for (size_t j {}; j<word.length(); j++) {
            points += (word[j]-96);
        }
        if (max_points<points) {
            max_points = points;
            word_with_max_points = word;
        }
        points = 0;
    }

    return word_with_max_points;
}

int main() {
    string text {"what time are we climbing up the volcano"}; // volcano
    std::cout << highestScoringWord(text);

    return 0;
}
///////////////
// #include <string>

// std::string highestScoringWord(const std::string &str)
// {
//   std::cout << str << std::endl;

// 	std::istringstream stm(str);
// 	std::string token, maxString;
// 	long maxValue = 0;

// 	auto GetValue = [](const std::string& s)
// 	{
// 		long r = 0;
// 		for (auto c : s)
// 			r += int(c) - int('a') + 1;

// 		return r;
// 	};

// 	while (std::getline(stm, token, ' ')) 
// 	{	
// 		long actValue = GetValue(token);
// 		if (actValue > maxValue)
// 		{
// 			maxValue = actValue;
// 			maxString = token;
// 		}
// 	}

// 	return maxString;
// }