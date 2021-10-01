#include "Bureaucrat.hpp"

int main(void) {

    try {
        Bureaucrat  boss("Michael", 2);
        std::cout << boss << std::endl;
        boss.upGrade();
        std::cout << boss << std::endl;
    } catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        Bureaucrat  employee("Franklin", 149);
        std::cout << employee << std::endl;
        employee.downGrade();
        std::cout << employee << std::endl;
    } catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        Bureaucrat  bureaucratError("Trevor", 0);
        std::cout << bureaucratError << std::endl;
    } catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        Bureaucrat  bureaucratError("Trevor", 151);
        std::cout << bureaucratError << std::endl;
    } catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        Bureaucrat  bureaucratError("Trevor", 1);
        std::cout << bureaucratError << std::endl;
        bureaucratError.upGrade();
    } catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        Bureaucrat  bureaucratError("Trevor", 150);
        std::cout << bureaucratError << std::endl;
        bureaucratError.downGrade();
    } catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
