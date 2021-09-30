#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal") {
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type) {
    std::cout << "WrongAnimal initialization constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) : _type(src._type) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(__attribute__((unused)) const WrongAnimal &rhs) {
    std::cout << "WrongAnimal assignement operator called" << std::endl;
    return *this;
}

const std::string&  WrongAnimal::getType(void) const {
    return _type;
}

void    WrongAnimal::makeSound(void) const {
    std::cout << "Hey! I'm an WrongAnimal." << std::endl;
}
