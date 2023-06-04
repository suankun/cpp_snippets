#include <iostream>
#include <string>
using namespace std;

std::string how_much_i_love_you(int nb_petals) {
  std::string result;
  int check = nb_petals % 6;
  switch (check)
  {
    case 1: return result = "I love you"; break;
    case 2: return result = "a little"; break;
    case 3: return result = "a lot"; break;
    case 4: return result = "passionately"; break;
    case 5: return result = "madly"; break;
    case 0: return result = "not at all"; break;
  }
  return result;
}

int main() {
    string res = how_much_i_love_you(12);
    cout << res << endl;

    return 0;
}