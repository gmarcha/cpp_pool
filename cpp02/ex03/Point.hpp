#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {

	public:

		Point(void);
		Point(const float a, const float b);
		Point(const Point &src);
		virtual ~Point();

		Point&				operator=(const Point &rhs);

		const Fixed&		getX(void) const;
		const Fixed&		getY(void) const;

	private:

		const Fixed			_x;
		const Fixed			_y;

};

std::ostream&		operator<<(std::ostream &out, const Point &rhs);

bool				bsp(const Point a, const Point b, const Point c, const Point point);

#endif // POINT_HPP
