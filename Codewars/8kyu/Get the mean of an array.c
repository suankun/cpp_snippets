// https://www.codewars.com/kata/563e320cee5dddcf77000158/train/c
#include <stddef.h>

int get_average(const int *marks, size_t count) {
    double sum = 0;
    for (int i=0; i<count; i++) sum += marks[i];
    double avg = sum/count;
    int result = avg;
    return result;
}
//
#include <stddef.h>

int get_average(const int *marks, size_t count)
{
    int avg=0;
    for (int i=0; i<count; i++) avg+=marks[i];
    return avg/count;
}
