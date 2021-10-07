#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria(void) :
    _type("AMateria") {}

AMateria::AMateria(const std::string &type) :
    _type(type) {}

AMateria::AMateria(const AMateria &src) :
    _type(src._type) {}

AMateria::~AMateria() {}

AMateria&   AMateria::operator=(const AMateria &rhs) {
    if (_type == rhs._type) {
        return *this;
    }
    return *this;
}

const std::string&  AMateria::getType(void) const {
    return _type;
}

void    AMateria::use(__attribute__ ((unused)) ICharacter &target) {}
