#include <iostream>
#include "Animal.hpp"

Animal::Animal(void) : _type("Animal") {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type) {
    std::cout << "Animal initialization constructor called" << std::endl;
}

Animal::Animal(const Animal &src) : _type(src._type) {
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(__attribute__((unused)) const Animal &rhs) {
    std::cout << "Animal assignement operator called" << std::endl;
    return *this;
}

const std::string&  Animal::getType(void) const {
    return _type;
}

void    Animal::makeSound(void) const {
    std::cout << "Hey! I'm an Animal." << std::endl;
}
