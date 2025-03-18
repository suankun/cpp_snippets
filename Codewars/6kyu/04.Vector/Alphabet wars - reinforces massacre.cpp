// https://www.codewars.com/kata/593e2077edf0d3e2d500002d/train/cpp

// There is a war and nobody knows - the alphabet war!
// The letters called airstrikes to help them in war - dashes and dots are spread everywhere on the battlefield.

// Task
// Write a function that accepts reinforces array of strings and airstrikes array of strings.
// The reinforces strings consist of only small letters. The size of each string in reinforces array is the same.
// The airstrikes strings consists of * and white spaces. The size of each airstrike may vary. There may be also no airstrikes at all.

// The first row in reinforces array is the current battlefield. Whenever some letter is killed by bomb, it's replaced by a letter from next string in reinforces array on the same position.
// The airstrike always starts from the beginning of the battlefield.
// The * means a bomb drop place. The each * bomb kills letter only on the battelfield. The bomb kills letter on the same index on battlefield plus the adjacent letters.
// The letters on the battlefield are replaced after airstrike is finished.
// Return string of letters left on the battlefield after the last airstrike. In case there is no any letter left in reinforces on specific position, return _.

// reinforces = [ "abcdefg",
//                "hijklmn"];
// airstrikes = [ "   *   ",
//                "*  *   "];
               
// The battlefield  is     : "abcedfg".
// The first airstrike    : "   *   "  
// After first airstrike  : "ab___fg"
// Reinforces are comming : "abjklfg"
// The second airstrike   : "*  *   "
// After second airstrike : "_____fg"
// Reinforces are coming  : "hi___fg"
// No more airstrikes => return "hi___fg"
// Other example
//   reinforces =    
//           ["g964xxxxxxxx",
//            "myjinxin2015",
//            "steffenvogel",
//            "smile67xxxxx",
//            "giacomosorbi",
//            "freywarxxxxx",
//            "bkaesxxxxxxx",
//            "vadimbxxxxxx",
//            "zozofouchtra",
//            "colbydauphxx" ];
// airstrikes =
//           ["* *** ** ***",
//            " ** * * * **",
//            " * *** * ***",
//            " **  * * ** ",
//            "* ** *   ***",
//            "***   ",
//            "**",
//            "*",
//            "*" ]
// That should lead to:

// alphabetWar(reinforces, airstrikes); // => codewarsxxxx

#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

std::string alphabet_war(const std::vector<std::string>& reinforces, 
                         const std::vector<std::string>& airstrikes) {
    if (reinforces.empty() || reinforces[0].empty()) return "";

    size_t length = reinforces[0].size();
    std::vector<int> losses(length, 0);

    for (const std::string& strike : airstrikes) {
        std::vector<int> massacre(length, 0);
        std::string modStrike = strike;

        size_t bombAt;
        while ((bombAt = modStrike.find('*')) != std::string::npos) {
            massacre[std::max(bombAt, size_t(1)) - 1] = 1;
            massacre[bombAt] = 1;
            massacre[std::min(bombAt + 1, length - 1)] = 1;
            modStrike[bombAt] = ' '; 
        }

        for (size_t i = 0; i < length; ++i) {
            losses[i] += massacre[i];
        }
    }

    std::ostringstream result;
    for (size_t i = 0; i < length; ++i) {
        if (losses[i] < reinforces.size()) {
            result << reinforces[losses[i]][i];
        } else {
            result << '_';
        }
    }

    return result.str();
}
//
#include <string>
#include <vector>

std::string alphabet_war(const std::vector<std::string>& reinforces,
                         const std::vector<std::string>& airstrikes)
{
    std::vector<std::string> airstrikes_l ;
    for(int i = 0; i < airstrikes.size(); i++){
        airstrikes_l.push_back(airstrikes[i] + std::string(reinforces[0].size()-airstrikes[i].size(),' '));
    }

    std::string res = "";
    int count = 0;
    for(int i = 0; i < reinforces[0].size(); i++) {

        for(int j = 0; j < airstrikes.size(); j++) {
            if(airstrikes_l[j][i-1] == '*' || airstrikes_l[j][i] == '*' || airstrikes_l[j][i+1] == '*')
                count++;
        }

        if(count < reinforces.size()) res += reinforces[count][i];
        else res += '_';
        count = 0;
    }

    return res;
}
