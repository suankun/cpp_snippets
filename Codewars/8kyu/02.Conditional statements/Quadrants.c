// https://www.codewars.com/kata/643af0fa9fa6c406b47c5399/train/c
enum quadrants {I=1, II, III, IV};

enum quadrants quadrant(int x, int y) {
    if (x > 0 && y > 0) {
        return 1; // First quadrant
    } else if (x < 0 && y > 0) {
        return 2; // Second quadrant
    } else if (x < 0 && y < 0) {
        return 3; // Third quadrant
    } else {
        return 4; // Fourth quadrant
    }
}
//
enum quadrants {I=1, II, III, IV};

enum quadrants quadrant(int x, int y) {

    if(x > 0 && y > 0)
        return I;
    else if(x < 0 && y > 0)
        return II;
    else if(x < 0 && y < 0)
        return III;
    else if(x > 0 && y < 0)
        return IV;
  
    return 0;
}
