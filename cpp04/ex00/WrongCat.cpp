#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src) {
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &rhs) {
    WrongAnimal::operator=(rhs);
    std::cout << "WrongCat assignement operator called" << std::endl;
    return *this;
}

void    WrongCat::makeSound(void) const {
    std::cout << "Wrongmiaouh, wrongmiaouh, wrongmiaouh!" << std::endl;
}
