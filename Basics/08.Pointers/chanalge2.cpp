// find and return address of the max element

#include <iostream>

int* maximum_address( int data[], unsigned int size){
    int* max_address;
    
    //Don't modify anything above this line
    //Your code will go below this line

    int max_number = data[0];
    for (unsigned int i = 0; i < size; i++) {
        if (max_number < data[i]) {
            max_number = data[i];
            max_address = &data[i];
        }
    }

    //Your code should go above this line
    //Don't modify anything after this line
    return max_address;
}
