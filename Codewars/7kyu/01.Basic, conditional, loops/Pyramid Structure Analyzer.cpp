// https://www.codewars.com/kata/66bb6583ac1620f505a8e31b/train/cpp
#include <tuple>

std::tuple<int, int, int, int> pyramid(int s)
{
    const int sides = (s - 2) / 4, vertices = sides + 1, edges = 2 * sides, faces = sides + 1;
    
    return { vertices, edges, faces, sides };
}
