#include <iostream>
#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src) {
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &rhs) {
    Animal::operator=(rhs);
    std::cout << "Dog assignement operator called" << std::endl;
    return *this;
}

void    Dog::makeSound(void) const {
    std::cout << "Woof! Woof! Grrr.." << std::endl;
}
