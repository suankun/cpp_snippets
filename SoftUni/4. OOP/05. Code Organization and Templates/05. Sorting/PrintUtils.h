#ifndef _PRINT_UTILS_H_
#define _PRINT_UTILS_H_

template<typename T>
void printContainer(typename T::iterator itB, typename T::iterator itE) {

    typename T::iterator itC = itB;

    for (; itC != itE; itC++)
        std::cout << *itC << ' ';

    std::cout << std::endl;

}

#endif // _PRINT_UTILS_H_