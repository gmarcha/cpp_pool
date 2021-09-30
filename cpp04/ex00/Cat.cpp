#include <iostream>
#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) {
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &rhs) {
    Animal::operator=(rhs);
    std::cout << "Cat assignement operator called" << std::endl;
    return *this;
}

void    Cat::makeSound(void) const {
    std::cout << "Miaouh, miaouh, miaouh!" << std::endl;
}
