// https://www.codewars.com/kata/586c1cf4b98de0399300001d/train/cpp
int combat(int health, int damage){
  return health-damage >= 0 ? health-damage : 0;
}
//
int combat(int health, int damage){
  return damage > health ? 0 : health - damage;
}