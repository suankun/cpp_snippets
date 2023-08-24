// Your job is to write a container class called Reverser, which we can initialize with int 5 elements like below

// Reverser r{7,4,1,9,6};
// and it'll store them in reverse order. You should use std::initializer_list to get the data stored as per the requirements here.

// It'll also have a print method to print out the data that is currently stored in. The line

// r.print();
// will print : 

// Collection [6 9 1 4 7 ]
// It's a requirement that the collection stores only 5 elements to keep things simple.

#ifndef EXERCISE_H
#define EXERCISE_H

#include <iostream>

struct Reverser{

	Reverser(std::initializer_list<int> list) {
	    size_t arr_size = sizeof(m_data)/sizeof(int);
		for(size_t i{arr_size} ;  i > 0; --i){
				m_data[arr_size - i] =  *(list.begin() + (i-1));
        }
	}
	void print(){
		std::cout << "Collection [";
		for(int & i : m_data){
			std::cout << i << " ";
		}
		std::cout << "]";
	}

	//fields
	int m_data[5];
};

#endif // _EXERCISE_H
