#include <iostream>
#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(NULL) {
    _brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src), _brain(NULL) {
    _brain = new Brain(*src._brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
    if (_brain != NULL) {
        delete _brain;
    }
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &rhs) {
    Animal::operator=(rhs);
    if (_brain != NULL) {
        delete _brain;
    }
    _brain = new Brain(*rhs._brain);
    std::cout << "Cat assignement operator called" << std::endl;
    return *this;
}

void    Cat::makeSound(void) const {
    std::cout << "Miaouh, miaouh, miaouh!" << std::endl;
}
