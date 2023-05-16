int rental_car_cost(int d){
  int cost {};
  cost = d * 40;
  if (d >= 3 && d < 7) {
    cost -= 20;
  } else if (d >= 7) {
    cost -= 50;
  }
  
  return cost;
}

// int rental_car_cost(int d){
//   return d >= 7? d * 40 - 50:  d >= 3? d * 40 - 20: d * 40;
// }
