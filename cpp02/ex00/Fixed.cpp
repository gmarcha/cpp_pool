#include "Fixed.hpp"

Fixed::Fixed(void) : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) : _rawBits(src._rawBits) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed				&Fixed::operator=(const Fixed &rhs) {
	std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs) {
		this->_rawBits = rhs._rawBits;
	}
	return (*this);
}

int					Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;

	return (this->_rawBits);
}

void				Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;

	this->_rawBits = raw;
}
