#include <iostream>
#include <cstdlib>
#include "Base.hpp"

int main(void) {

    srand(time(NULL));

    for (size_t i = 0; i < 10; i++) {

        Base* test = generate();

        std::cout << "Pointer: ";
        identify_from_pointer(test);
        std::cout << "Reference: ";
        identify_from_reference(*test);

        delete test;
    }

    return 0;
}
