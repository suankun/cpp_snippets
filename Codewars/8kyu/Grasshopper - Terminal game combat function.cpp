int combat(int health, int damage){
  return health-damage >= 0 ? health-damage : 0;
}
////////////////
int combat(int health, int damage){
  return damage > health ? 0 : health - damage;
}