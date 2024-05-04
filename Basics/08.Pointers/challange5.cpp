#include <iostream>

void merge_arrays(int data1[], int data2[],
           unsigned int size1, unsigned int size2){

    //Don't modify anything above this line
    //Your code will go below this line
    unsigned int new_size = size1 + size2;
    int new_array[new_size];

    unsigned int i;
    for (i = 0; i < new_size; i++) {
        if(i < size1){
            new_array[i] = data1[i];
        }
        else {
            new_array[i] = data2[i-size1];
        }
    }
    
    for (i = 0; i < new_size; i++) {
        std::cout << new_array[i] << ' ';
    }

    //Your code will go above this line
    //Don't modify anything below this line

}
//
#include <iostream>

void merge_arrays(int data1[], int data2[],
           unsigned int size1, unsigned int size2){


    //Here we allocate the array on the heap because the size of the
    //new array is dynamic, and will only be known at run time, the size
    //could be a 20, 50, or 100 or really whatever, hence the need to dynamically
    //allocate.

    //Note : Some compilers may allow you to statically allocate new_array
    //like
    // int new_array[size1 + size2];
    // But it's not recommended.
    
    int * new_array = new int [size1 + size2]; // Allocate the larger array dynamically : RECOMMENDED!

    //int new_array[size1 + size2]; // Try this in your environment and your IDE/Editor may give you 
                                    // Squiggly lines to signal something being wrong.

    for(unsigned int i{}; i < (size1 + size2); ++i){

      if(i < size1){
        new_array[i] = data1[i];
      }else{
        new_array[i] = data2[i-size1];
      }

    }

    //Print the new array
    for(unsigned int i{}; i < (size1 + size2); ++i){
      std::cout << new_array[i] << " ";
    }
    
    delete[] new_array;
        
}
