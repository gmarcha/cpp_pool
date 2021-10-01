#include <ostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {

    try {
        Form        contract("Invalid", 0);
        std::cout << contract << std::endl;
    } catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Form        contract("Invalid", 151);
        std::cout << contract << std::endl;
    } catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Form        contract("Invalid", 42, 0);
        std::cout << contract << std::endl;
    } catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Form        contract("Invalid", 42, 151);
        std::cout << contract << std::endl;
    } catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    {
        Bureaucrat  boss("Michael", 41);
        std::cout << boss << std::endl;
        Form        contract("Payload", 42);
        std::cout << contract << std::endl;

        boss.signForm(contract);
        std::cout << contract << std::endl;
    }

    std::cout << std::endl;
    
    {
        Bureaucrat  employee("Franklin", 43);
        std::cout << employee << std::endl;
        Form        contract("Payload", 42);
        std::cout << contract << std::endl;

        employee.signForm(contract);
        std::cout << contract << std::endl;
    }
    return 0;
}
