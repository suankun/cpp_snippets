// https://www.codewars.com/kata/5263c6999e0f40dee200059d/train/cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

std::vector<std::string> get_pins(std::string observed) {
    int vecSize {1};
    for (size_t i {}; i<observed.length(); i++) {
        switch (observed[i]) {
            case '0': vecSize*=2; break;
            case '1': vecSize*=3; break;
            case '2': vecSize*=4; break;
            case '3': vecSize*=3; break;
            case '4': vecSize*=4; break;
            case '5': vecSize*=5; break;
            case '6': vecSize*=4; break;
            case '7': vecSize*=3; break;
            case '8': vecSize*=5; break;
            case '9': vecSize*=3; break;
        }
    }

    int iterator {1};
    std::vector<std::string> strings(vecSize); 
    for (size_t j {observed.length()-1}; j>=0; j--) {
        switch (observed[j]) {
            case '0':
            for (int k {}; k<vecSize; k++) {
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "0");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "8");
                    k++;
                }

                k--;
            }
            iterator*=2;
            break;
            case '1': 
            for (int k {}; k<vecSize; k++) {
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "1");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "2");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "4");
                    k++;
                }
                k--;
            }
            iterator*=3;
            break;
            case '2': 
            for (int k {}; k<vecSize; k++) {
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "1");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "2");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "3");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "5");
                    k++;
                }
                k--;
            }
            iterator*=4;
            break;
            case '3': 
            for (int k {}; k<vecSize; k++) {
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "2");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "3");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "6");
                    k++;
                }
                k--;
            }
            iterator*=3;
            break;
            case '4':
            for (int k {}; k<vecSize; k++) {
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "1");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "4");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "5");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "7");
                    k++;
                }
                k--;
            }
            iterator*=4;
            break;
            case '5':
            for (int k {}; k<vecSize; k++) {
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "2");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "4");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "5");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "6");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "8");
                    k++;
                }
                k--;
            }
            iterator*=5;
            break;
            case '6':
            for (int k {}; k<vecSize; k++) {
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "3");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "5");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "6");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "9");
                    k++;
                }
                k--;
            }
            iterator*=4;
            break;
            case '7':
            for (int k {}; k<vecSize; k++) {
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "4");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "7");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "8");
                    k++;
                }
                k--;
            }
            iterator*=3;
            break;
            case '8': 
            for (int k {}; k<vecSize; k++) {
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "0");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "5");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "7");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "8");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "9");
                    k++;
                }
                k--;
            }
            iterator*=5;
            break;
            case '9':
            for (int k {}; k<vecSize; k++) {
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "6");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "8");
                    k++;
                }
                for (int l {}; l<iterator; l++) {
                    strings[k].insert(0, "9");
                    k++;
                }
                k--;
            }
            iterator*=3;
            break;
        }
        if (j==0) break;
    }

    // for (auto el: strings) cout << el << ',';
    // cout << endl;
    return strings;
}

// 0 - 0, 8
// 1 - 1, 2, 4
// 2 - 1, 2, 3, 5
// 3 - 2, 3, 6
// 4 - 1, 4, 5, 7
// 5 - 2, 4, 5, 6, 8
// 6 - 3, 5, 6, 9
// 7 - 4, 7, 8
// 8 - 0, 5, 7, 8, 9
// 9 - 6, 8, 9

int main() {
    // std::vector<std::string> res1 = get_pins("8");
    std::vector<std::string> res2 = get_pins("11");
    // std::vector<std::string> res3 = get_pins("369");
    // for (auto p: res1) cout << p << ' ';
    // cout << endl;
    // // "0", "5", "7", "8", "9"
    for (auto p: res2) cout << p << ' ';
    cout << endl;
    // "11", "12", "14", "21", "22", "24", "41", "42", "44"
    // for (auto p: res3) cout << p << ' ';
    // cout << endl;
    // // "236", "238", "239", "256", "258", "259", "266", "268", "269", "296", "298", "299",
    // // "336", "338", "339", "356", "358", "359", "366", "368", "369", "396", "398", "399",
    // // "636", "638", "639", "656", "658", "659", "666", "668", "669", "696", "698", "699"

    return 0;
}
//
// #include <map>
// using namespace std;

// vector<string> get_pins(const string &observed, const string &prefix = "")
// {
//     static const map<char, string> neighbors =
//     {
//         {'1', "124"},  {'2', "1235"},  {'3', "236"},
//         {'4', "1457"}, {'5', "24568"}, {'6', "3569"},
//         {'7', "478"},  {'8', "05789"}, {'9', "689"},
//                        {'0', "08"}
//     };
//     if ( !observed.size() ) return {prefix};
//     vector<string> pins;
//     for (auto c : neighbors.at(observed[0]))
//         for (auto pin : get_pins(observed.substr(1), prefix + c))
//             pins.push_back(pin);
//     return pins;
// }
