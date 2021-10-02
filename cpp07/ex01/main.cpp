#include <iostream>
#include <string>
#include "iter.hpp"

int main(void) {

    int intArray[] = {0, 42, -1, 1337};
    const size_t sizeIntArray = sizeof(intArray) / sizeof(intArray[0]);

    iter(intArray, sizeIntArray, print);
    iter(intArray, sizeIntArray, add);
    std::cout << std::endl;
    iter(intArray, sizeIntArray, print);

    std::cout << std::endl;

    const std::string strArray[] = {"Hello World!", "42 school", "Marvin the paranoid Android"};
    const size_t sizeStrArray = sizeof(strArray) / sizeof(strArray[0]);

    iter(strArray, sizeStrArray, print);

    return 0;
}
