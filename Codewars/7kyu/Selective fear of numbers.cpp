// https://www.codewars.com/kata/55b1fd84a24ad00b32000075/train/cpp
#include <string>

bool am_i_afraid(const std::string &day, int num)
{
    bool res = false;
    if (day == "Monday" && num == 12) res = true;
    if (day == "Tuesday" && num > 95) res = true;
    if (day == "Wednesday" && num == 34) res = true;
    if (day == "Thursday" && num == 0) res = true;
    if (day == "Friday" && num % 2 == 0) res = true;
    if (day == "Saturday" && num == 56) res = true;
    if (day == "Sunday" && (num == 666 || num == -666)) res = true;
    return res;
}
//
bool am_i_afraid(const std::string &day, int num)
{
  if (day == "Monday") return num == 12;
  if (day == "Tuesday") return num > 95;
  if (day == "Wednesday") return num == 34;
  if (day == "Thursday") return num == 0;
  if (day == "Friday") return num % 2 == 0;
  if (day == "Saturday") return num == 56;
  if (day == "Sunday") return abs(num) == 666;
}
