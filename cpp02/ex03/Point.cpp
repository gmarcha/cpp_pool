#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::Point(const float a, const float b) : _x(Fixed(a)), _y(Fixed(b)) {}

Point::Point(const Point &src) : _x(src._x), _y(src._y) {}

Point::~Point() {}

Point&				Point::operator=(const Point &rhs) {
	static_cast<void>(rhs);
	return (*this);
}

const Fixed&		Point::getX(void) const {
	return (this->_x);
}

const Fixed&		Point::getY(void) const {
	return (this->_y);
}

std::ostream&		operator<<(std::ostream &out, const Point &rhs) {

	out << "(" << rhs.getX() << "," << rhs.getY() << ")";
	return (out);
}
