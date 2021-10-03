#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

const char* EasyFindFail::what() const throw() {
    return "easyFind failed";
}

int main(void) {

    int intArray[] = { 0, 42, -1 };
    size_t n = sizeof(intArray) / sizeof(intArray[0]);

    std::vector<int> intVector(intArray, intArray + n);
    
    try {
        std::cout << easyFind(intVector, 42) << std::endl;
    } catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << easyFind(intVector, -42) << std::endl;
    } catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    std::list<int> intList(intArray, intArray + n);
    
    try {
        std::cout << easyFind(intList, 42) << std::endl;
    } catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << easyFind(intList, -42) << std::endl;
    } catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
