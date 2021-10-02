#include <string>
#include <iostream>
#include <cstdlib>
#include <ctype.h>
#include "Converter.hpp"

int main(int ac, char *av[]) {

    if (ac != 2) {
        std::cout << "error: invalid number of arguments" << std::endl;
        return EXIT_FAILURE;
    }

    const std::string   inputString(av[1]);

    Converter   toConvert(inputString);

    toConvert.printValues();

    return EXIT_SUCCESS;
}
