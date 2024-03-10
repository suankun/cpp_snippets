int quarter_of(int month){
  int res {};
  if (month >= 1 && month <= 3)
    res = 1;
  else if (month >= 4 && month <= 6)
    res = 2;
  else if (month >= 7 && month <= 9)
    res = 3;
  else if (month >= 10 && month <= 12)
    res = 4;
  return res;
}

// int quarter_of(int month){
//   return (month + 2) / 3;
// }