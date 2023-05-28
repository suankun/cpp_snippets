bool checkForFactor(int base, int factor) {
  return (base % factor == 0) ? true : false;
}

///////////////
bool checkForFactor(int base, int factor) {
  return base % factor == 0;
}