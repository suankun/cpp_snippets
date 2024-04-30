#include <iostream>

// find address of the min element using pointer arithmetic
int*  minimum_address( int data[], unsigned int size){

    int * min_address;

    // Don't modify anything above this line
    //Your code should go below this line
    //REMEMBER !ONLY POINTER ARITHMETIC SHOULD BE USED TO ACCESS ARRAY DATA
    int min_data = data[0];
    for (unsigned int i = 0; i < size; i++) {
        if (min_data > *(data + i)) {
            min_data = *(data + i);
            min_address = data + i;
        }
    }
  
    //Your code should go above this line
    //Don't modify anything below this line

    return min_address;
}
