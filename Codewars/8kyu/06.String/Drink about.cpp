#include <string>

std::string people_with_age_drink(int age) {
  std::string beverage;
  if (age < 14) beverage = "drink toddy";
  else if (age < 18) beverage = "drink coke";
  else if (age < 21) beverage = "drink beer";
  else if (age >= 21) beverage = "drink whisky";
  return beverage;
}

///////////////
#include <string>

std::string people_with_age_drink(int old) {
  std::string s = "drink " ;
  s += old < 14 ? "toddy" : old < 18 ? "coke" : old < 21 ? "beer" : "whisky";
  return s;  
}