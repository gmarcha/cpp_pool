#include <iostream>
#include <iomanip>
#include "Data.hpp"

int main(void) {

    std::cout << "======= WORKING TEST ==" << std::endl;

    {
        Data* dataPtr = new Data("11001010");

        uintptr_t code = serialize(dataPtr);
        Data* decode = deserialize(code);

        const bool areCodesMatching = (dataPtr == decode);

        std::cout << "Serialize and deserialize are ";
        if (areCodesMatching == false) {
            std::cout << "not ";
        }
        std::cout << "working correctly" << std::endl;

        delete dataPtr;
    }

    std::cout << std::endl << "======= ERROR TEST ====" << std::endl;

    {
        Data* dataPtr = new Data("11001010");

        uintptr_t code = serialize(dataPtr);
        Data* decode = deserialize(code) - 1;

        const bool areCodesMatching = (dataPtr == decode);

        std::cout << "Serialize and deserialize are ";
        if (areCodesMatching == false) {
            std::cout << "not ";
        }
        std::cout << "working correctly" << std::endl;

        delete dataPtr;
    }

    return 0;
}
