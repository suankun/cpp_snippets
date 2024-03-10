// https://www.codewars.com/kata/59c287b16bddd291c700009a/train/cpp
#include <iostream>
#include <cmath>

int ice_brick_volume(int radius, int bottle_length, int rim_length) {
    // Calculate the maximum possible height of the ice brick
    int max_height = bottle_length - rim_length;

    // Calculate the side of the square base of the ice brick
    int side = 2 * radius;

    // Calculate the volume of the ice brick (side * side * max_height)
    int volume = side * side * max_height;

    return volume/2;
}
//
int ice_brick_volume(int radius, int bottle_length, int rim_length) {
  return 2 * radius  *  radius  *  (bottle_length  -   rim_length);
}
