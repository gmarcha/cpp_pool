#include <iostream>
#include "Ice.hpp"

Ice::Ice(void) :
    AMateria("Ice") {}

Ice::Ice(const Ice &src) :
    AMateria(src) {}

Ice::~Ice() {}

Ice&   Ice::operator=(const Ice &rhs) {
    AMateria::operator=(rhs);
    return *this;
}

AMateria*   Ice::clone(void) const {
    return new Ice(*this);
}

void    Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
