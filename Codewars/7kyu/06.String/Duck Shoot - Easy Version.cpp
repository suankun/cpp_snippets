// https://www.codewars.com/kata/57d27a0a26427672b900046f/train/cpp
#include <string>

std::string duckShoot(int ammo, double aim, std::string ducks){
  int perfectShoot = ammo * aim;
  for (char & ch : ducks) {
    if (ch == '2' && perfectShoot > 0) {
      ch = 'X';
      perfectShoot--;
    }
  }
  return ducks;
}
