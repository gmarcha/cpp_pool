#include "Fixed.hpp"

Fixed::Fixed(void) : _rawBits(0) {}

Fixed::Fixed(const int nb) : _rawBits(nb << _nbFractionalBits) {}

Fixed::Fixed(const float nb) : _rawBits(static_cast<int>(roundf(nb * (1 << _nbFractionalBits)))) {}

Fixed::Fixed(const Fixed &src) : _rawBits(src._rawBits) {}

Fixed::~Fixed() {}

Fixed				&Fixed::operator=(const Fixed &rhs) {

	if (this != &rhs) {
		this->_rawBits = rhs._rawBits;
	}
	return (*this);
}

Fixed&				Fixed::operator++(void) {

	this->_rawBits++;
	return (*this);
}

Fixed&				Fixed::operator--(void) {

	this->_rawBits--;
	return (*this);
}

Fixed				Fixed::operator++(int) {

	Fixed			old(*this);
	operator++();
	return (old);
}

Fixed				Fixed::operator--(int) {

	Fixed			old(*this);
	operator--();
	return (old);
}

Fixed				Fixed::operator+(const Fixed &rhs) const {
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed				Fixed::operator-(const Fixed &rhs) const {
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed				Fixed::operator*(const Fixed &rhs) const {
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed				Fixed::operator/(const Fixed &rhs) const {
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

bool				Fixed::operator==(const Fixed &rhs) const {
	return (this->_rawBits == rhs._rawBits);
}

bool				Fixed::operator!=(const Fixed &rhs) const {
	return (!(*this == rhs));
}

bool				Fixed::operator<(const Fixed &rhs) const {
	return (this->_rawBits < rhs._rawBits);
}

bool				Fixed::operator>(const Fixed &rhs) const {
	return (rhs < *this);
}

bool				Fixed::operator<=(const Fixed &rhs) const {
	return (!(*this > rhs));
}

bool				Fixed::operator>=(const Fixed &rhs) const {
	return (!(*this < rhs));
}

int					Fixed::getRawBits(void) const {
	return (this->_rawBits);
}

void				Fixed::setRawBits(const int raw) {
	this->_rawBits = raw;
}

float				Fixed::toFloat(void) const {
	return (this->_rawBits / static_cast<float>(1 << _nbFractionalBits));
}

int					Fixed::toInt(void) const {
	return (this->_rawBits >> _nbFractionalBits);
}

Fixed&				Fixed::min(Fixed &a, Fixed &b) {
	
	if (a < b)
		return (a);
	return (b);
}

Fixed&				Fixed::max(Fixed &a, Fixed &b) {

	if (a < b)
		return (b);
	return (a);
}

const Fixed&		Fixed::min(const Fixed &a, const Fixed &b) {

	if (a < b)
		return (a);
	return (b);
}

const Fixed&		Fixed::max(const Fixed &a, const Fixed &b) {

	if (a < b)
		return (b);
	return (a);
}

std::ostream&		operator<<(std::ostream &out, const Fixed &rhs) {
	out << rhs.toFloat();
	return (out);
}

const int			Fixed::_nbFractionalBits = 8;
