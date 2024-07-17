#ifndef _PRINT_UTILS_H_
#define _PRINT_UTILS_H_

template<typename T>
void printVector(T & vec) {

    typename T::iterator itC = vec.begin();

    for (; itC != vec.end(); itC++)
        std::cout << *itC << ' ';

    std::cout << std::endl;

}

#endif // _PRINT_UTILS_H_