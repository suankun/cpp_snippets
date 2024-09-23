// https://www.codewars.com/kata/58a672d6426bf38be4000057/train/cpp
// For this kata, you are given three points (x1,y1,z1), (x2,y2,z2), and (x3,y3,z3) that lie on a straight line in 3-dimensional space. You have to figure out which point lies in between the other two.

// Your function should return 1, 2, or 3 to indicate which point is the in-between one.

unsigned middle_point(double x1, double y1, double z1,
                      double x2, double y2, double z2,
                      double x3, double y3, double z3)
{
  if (y1 == y2 && y2 == y3) {
      if (x1 == x2 && x2 == x3) {
          if ((z1 < z2 && z2 > z3 && z3 < z1) || (z1 > z2 && z2 < z3 && z3 > z1))
              return 1;
          else if ((z1 < z2 && z2 < z3) || (z1 > z2 && z2 > z3))
              return 2;
          else if ((z1 < z2 && z2 > z3 && z3 > z1) || (z1 > z2 && z2 < z3 && z3 < z1))
              return 3;
      }
    
      if ((x1 < x2 && x2 > x3 && x3 < x1) || (x1 > x2 && x2 < x3 && x3 > x1))
          return 1;
      else if ((x1 < x2 && x2 < x3) || (x1 > x2 && x2 > x3))
          return 2;
      else if ((x1 < x2 && x2 > x3 && x3 > x1) || (x1 > x2 && x2 < x3 && x3 < x1))
          return 3;
  }
  
  else if ((y1 < y2 && y2 > y3 && y3 < y1) || (y1 > y2 && y2 < y3 && y3 > y1))
      return 1;
  else if ((y1 < y2 && y2 < y3) || (y1 > y2 && y2 > y3))
      return 2;
  
  return 3;
}
//
unsigned middle_point(double x1, double y1, double z1,
                      double x2, double y2, double z2,
                      double x3, double y3, double z3)
{
    return (x1 - x2) * (x1 - x3) + (y1 - y2) * (y1 - y3) + (z1 - z2) * (z1 - z3) < 0 ? 1 :
           (x2 - x1) * (x2 - x3) + (y2 - y1) * (y2 - y3) + (z2 - z1) * (z2 - z3) < 0 ? 2 :
            3;
}
