// https://www.codewars.com/kata/57e92e91b63b6cbac20001e5/train/cpp
int duty_free(int price, int discount, int holiday_cost) {
  return holiday_cost/(price*(discount/100.0));
}