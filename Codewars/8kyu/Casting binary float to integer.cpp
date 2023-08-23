// https://www.codewars.com/kata/5f1804560873b20023e8244a/train/c
#include <stdio.h>
#include <stdint.h>

int convert_to_int(float f) {
    float *float_ptr = &f;
    uint32_t *int_ptr = (uint32_t *)float_ptr;
    uint32_t bits = *int_ptr;
    int result = (int)bits;
    return result;
}
//
int convert_to_int(float f) {
  return *((int*)&f);
}
