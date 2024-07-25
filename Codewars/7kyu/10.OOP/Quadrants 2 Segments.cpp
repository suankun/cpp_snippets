// https://www.codewars.com/kata/643ea1adef815316e5389d17/train/cpp
struct coord {
    int x;
    int y;
};

bool quadrant_segment(const coord &A, const coord &B) {
    int ax = A.x, ay = A.y;
    
    int bx = B.x, by = B.y;
  
    if ((ax>0 && ay>0) && (bx>0 && by>0)) return false;
    if ((ax<0 && ay>0) && (bx<0 && by>0)) return false;
    if ((ax>0 && ay<0) && (bx>0 && by<0)) return false;
    if ((ax<0 && ay<0) && (bx<0 && by<0)) return false;
  
    return true;
}
//
bool quadrant_segment(const coord &a, const coord &b) {
  return (a.x > 0) != (b.x > 0) || (a.y > 0) != (b.y > 0);
}
