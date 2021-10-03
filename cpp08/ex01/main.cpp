#include <iostream>
#include <limits>
#include <math.h>
#include "span.hpp"

int main(void) {

    srand(time(NULL));

    {
        Span    span(3);

        try {
            std::cout << span.shortestSpan() << std::endl;
        } catch(std::exception &e) {
            std::cout << e.what() << std::endl;
        }

        span.addNumber(0);

        try {
            std::cout << span.shortestSpan() << std::endl;
        } catch(std::exception &e) {
            std::cout << e.what() << std::endl;
        }

        span.addNumber(42);
        span.addNumber(11);

        std::cout << span.shortestSpan() << std::endl;
        std::cout << span.longestSpan() << std::endl;

        try {
            span.addNumber(-1);
        } catch(std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }

    std::cout << std::endl;

    {
        const int array[] = {0, 42, -1, 11, 32, 64};
        const size_t sizeArray = sizeof(array) / sizeof(array[0]);

        Span    span(sizeArray);

        span.addNumber(array, array + sizeArray);

        std::cout << span.shortestSpan() << std::endl;
        std::cout << span.longestSpan() << std::endl;
    }

    std::cout << std::endl;

    {
        const size_t sizeArray = 16384;

        Span    span(sizeArray);

        for (size_t i = 0; i < sizeArray; i++) {
            span.addNumber(rand() % std::numeric_limits<int>::max());
        }

        std::cout << span.shortestSpan() << std::endl;
        std::cout << span.longestSpan() << std::endl;
    }
    return 0;
}
