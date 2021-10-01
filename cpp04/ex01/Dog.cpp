#include <iostream>
#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), _brain(NULL) {
    _brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src), _brain(NULL) {
    _brain = new Brain(*src._brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
    delete _brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &rhs) {
    Animal::operator=(rhs);
    delete _brain;
    _brain = new Brain(*rhs._brain);
    std::cout << "Dog assignement operator called" << std::endl;
    return *this;
}

void    Dog::makeSound(void) const {
    std::cout << "Woof! Woof! Grrr.." << std::endl;
}
