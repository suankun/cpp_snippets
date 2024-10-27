// https://www.codewars.com/kata/59922ce23bfe2c10d7000057/train/cpp
// The President's phone is broken
// He is not very happy.

// The only letters still working are uppercase E, F, I, R, U, Y.

// An angry tweet is sent to the department responsible for presidential phone maintenance.

// Kata Task
// Decipher the tweet by looking for words with known meanings.

// FIRE = "You are fired!"
// FURY = "I am furious."
// If no known words are found, or unexpected letters are encountered, then it must be a "Fake tweet."

// Notes
// The tweet reads left-to-right.
// Any letters not spelling words FIRE or FURY are just ignored
// If multiple of the same words are found in a row then plural rules apply -
// FIRE x 1 = "You are fired!"
// FIRE x 2 = "You and you are fired!"
// FIRE x 3 = "You and you and you are fired!"
// etc...
// FURY x 1 = "I am furious."
// FURY x 2 = "I am really furious."
// FURY x 3 = "I am really really furious."
// etc...
// Examples
// ex1. FURYYYFIREYYFIRE = "I am furious. You and you are fired!"
// ex2. FIREYYFURYYFURYYFURRYFIRE = "You are fired! I am really furious. You are fired!"
// ex3. FYRYFIRUFIRUFURE = "Fake tweet."

#include <string>
#include <sstream>

std::string fire_and_fury(const std::string& tweet) {
    if (tweet.empty())
        return "Fake tweet.";
  
    std::string allowed = "FIREUY";
    
    for (char c : tweet) {
        if (allowed.find(c) == std::string::npos) {
            return "Fake tweet.";
        }
    }

    std::ostringstream finalTweet;

    int fireCount = 0;
    int furyCount = 0;

    for (size_t i = 0; i <= tweet.size() - 4; ) {
        std::string current = tweet.substr(i, 4);

        if (current == "FIRE") {
            if (furyCount > 0) {
                finalTweet << "I am";
                for (int j = 1; j < furyCount; j++) {
                    finalTweet << " really";
                }
                finalTweet << " furious. ";
                furyCount = 0;
            }

            ++fireCount;
            i += 4;
        } 
        else if (current == "FURY") {
            if (fireCount > 0) {
                finalTweet << "You";
                for (int j = 1; j < fireCount; j++) {
                    finalTweet << " and you";
                }
                finalTweet << " are fired! ";
                fireCount = 0;
            }

            ++furyCount;
            i += 4;
        } 
        else {
            i++;
        }
    }

    if (fireCount > 0) {
        finalTweet << "You";
        for (int j = 1; j < fireCount; ++j) {
            finalTweet << " and you";
        }
        finalTweet << " are fired! ";
    }

    if (furyCount > 0) {
        finalTweet << "I am";
        for (int j = 1; j < furyCount; ++j) {
            finalTweet << " really";
        }
        finalTweet << " furious. ";
    }

    std::string result = finalTweet.str();
    if (result.empty()) {
        return "Fake tweet.";
    }
    if (result.back() == ' ') {
        result.pop_back();
    }

    return result;
}
//
#include <string>
#include <regex>
#include <algorithm>

std::string fire_and_fury(const std::string& tweet) 
{
    std::regex reg (R"(FIRE|FURY)"); std::string letters ("EFIRUY");
    std::sregex_iterator it = std::sregex_iterator(tweet.begin(), tweet.end(), reg), end;
    if (it == end || std::any_of(tweet.begin(), tweet.end(), [&](const char& c){
        return letters.find(c) == std::string::npos;
        })) return "Fake tweet.";
    std::string ret;
    while (it != end) {
        std::string word = (*it).str(0); int count = 1; ++it;
        while ((*it).str(0) == word) ++it, ++count;
        if (word == "FIRE") {
            std::string s = " You";
            for (int i = 1; i < count; ++i) s += " and you";
            ret += s + " are fired!";
        } else {
            std::string s = " I am";
            for (int i = 1; i < count; ++i) s += " really";
                ret += s + " furious.";
        }
    }
    return ret.substr(1);
}
