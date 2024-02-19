// https://www.codewars.com/kata/5763bb0af716cad8fb000580/train/cpp
int countSquares(int cuts) {
    if (cuts == 0) {
        return 1;
    }
    
    int total_cubes = (cuts + 1) * (cuts + 1) * (cuts + 1);
    int cubes_with_red_face = (cuts - 1) * (cuts - 1) * (cuts - 1);
    
    return total_cubes - cubes_with_red_face;
}
//
int countSquares(int cuts)
{
    if (cuts == 0) return 1;
    return 2*(3*cuts*cuts + 1);
}
//
int countSquares(int cuts)
{
    return cuts == 0 ? 1 : 6 * cuts * cuts + 2;
}
