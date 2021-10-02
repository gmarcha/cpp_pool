#include <iostream>
#include "whatever.hpp"

int main(void) {

    std::cout << "=== TEST SWAP ===" << std::endl;

    // type int
    {
        int a = 0, b = 42;
        std::cout << "int: a: " << a << ", b: " << b << std::endl;
        swap(a, b);
        std::cout << "int: a: " << a << ", b: " << b << std::endl;
    }
    // type float
    {
        float a = 0, b = 42;
        std::cout << "float: a: " << a << ", b: " << b << std::endl;
        swap(a, b);
        std::cout << "float: a: " << a << ", b: " << b << std::endl;
    }
    // type double
    {
        double a = 0, b = 42;
        std::cout << "double: a: " << a << ", b: " << b << std::endl;
        swap(a, b);
        std::cout << "double: a: " << a << ", b: " << b << std::endl;
    }
    // type string
    {
        std::string a = "a", b = "b";
        std::cout << "string: a: " << a << ", b: " << b << std::endl;
        swap(a, b);
        std::cout << "string: a: " << a << ", b: " << b << std::endl;
    }

    std::cout << std::endl << "=== TEST MIN ===" << std::endl;

    // type int
    {
        const int a = 0, b = 42;
        std::cout << "int: min " << a << " and " << b << ": " << min(a, b) << std::endl;       
    }
    {
        const int a = 42, b = 0;
        std::cout << "int: min " << a << " and " << b << ": " << min(a, b) << std::endl;
    }
    // type float
    {
        const float a = 0.1f, b = 42.1f;
        std::cout << "float: min " << a << " and " << b << ": " << min(a, b) << std::endl;
    }
    {
        const float a = 42.1f, b = 0.1f;
        std::cout << "float: min " << a << " and " << b << ": " << min(a, b) << std::endl;
    }
    // type double
    {
        const double a = 0.1, b = 42.1;
        std::cout << "double: min " << a << " and " << b << ": " << min(a, b) << std::endl;
    }
    {
        const double a = 42.1, b = 0.1;
        std::cout << "double: min " << a << " and " << b << ": " << min(a, b) << std::endl;
    }
    // type string
    {
        const std::string a = "a", b = "b";
        std::cout << "string: min " << a << " and " << b << ": " << min(a, b) << std::endl;
    }
    {
        const std::string a = "b", b = "a";
        std::cout << "string: min " << a << " and " << b << ": " << min(a, b) << std::endl;
    }

    std::cout << std::endl << "=== TEST MAX ===" << std::endl;

    // type int
    {
        const int a = 0, b = 42;
        std::cout << "int: max " << a << " and " << b << ": " << max(a, b) << std::endl;       
    }
    {
        const int a = 42, b = 0;
        std::cout << "int: max " << a << " and " << b << ": " << max(a, b) << std::endl;
    }
    // type float
    {
        const float a = 0.1f, b = 42.1f;
        std::cout << "float: max " << a << " and " << b << ": " << max(a, b) << std::endl;
    }
    {
        const float a = 42.1f, b = 0.1f;
        std::cout << "float: max " << a << " and " << b << ": " << max(a, b) << std::endl;
    }
    // type double
    {
        const double a = 0.1, b = 42.1;
        std::cout << "double: max " << a << " and " << b << ": " << max(a, b) << std::endl;
    }
    {
        const double a = 42.1, b = 0.1;
        std::cout << "double: max " << a << " and " << b << ": " << max(a, b) << std::endl;
    }
    // type string
    {
        const std::string a = "a", b = "b";
        std::cout << "string: max " << a << " and " << b << ": " << max(a, b) << std::endl;
    }
    {
        const std::string a = "b", b = "a";
        std::cout << "string: max " << a << " and " << b << ": " << max(a, b) << std::endl;
    }

    return 0;
}
