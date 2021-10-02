#include <iostream>
#include "Array.hpp"

int main(void) {

    Array<int>  emptyArray;

    std::cout << "size: " << emptyArray.size() << std::endl;
    try {
        std::cout << emptyArray[0] << std::endl;
    } catch(std::exception &e) {
        std::cout << "operation failed: " << e.what() << std::endl;
    }

    std::cout << std::endl;

    Array<int>   intArray(10);

    std::cout << "size: " << intArray.size() << std::endl;
    std::cout << intArray[0] << std::endl;

    try {
        std::cout << intArray[10] << std::endl;
    } catch(std::exception &e) {
        std::cout << "operation failed: " << e.what() << std::endl;
    }

    std::cout << std::endl;

    Array<std::string>  strArray(2);

    std::cout << "size: " << strArray.size() << std::endl;
    std::cout << "[" << strArray[0] << "]" << std::endl;

    strArray[0] = "Marvin the paranoid Android";
    strArray[1] = "Deep Thought";

    std::cout << strArray[0] << ", " << strArray[1] << std::endl;

    try {
        std::cout << strArray[2] << std::endl;
    } catch(std::exception &e) {
        std::cout << "operation failed: " << e.what() << std::endl;
    }

    std::cout << std::endl;

    Array<std::string>  strArrayCopy(strArray);

    std::cout << "size: " << strArrayCopy.size() << std::endl;
    std::cout << strArrayCopy[0] << std::endl;
    strArrayCopy[0] = "Marvin";
    std::cout << strArrayCopy[0] << std::endl;
    std::cout << strArray[0] << " (original array)" << std::endl;

    std::cout << std::endl;

    strArrayCopy = strArray;
    std::cout << strArrayCopy[0] << std::endl;

    return 0;
}
