# include "Point.hpp"

bool	bsp(const Point a, const Point b, const Point c, const Point point) {

	Fixed	part_ab, part_ac, part_bc;

	part_ab = ((b.getX() - a.getX()) * (point.getY() - a.getY())) - ((b.getY() - a.getY()) * (point.getX() - a.getX()));
	part_ac = ((c.getX() - a.getX()) * (point.getY() - a.getY())) - ((c.getY() - a.getY()) * (point.getX() - a.getX()));
	part_bc = ((b.getX() - c.getX()) * (point.getY() - c.getY())) - ((b.getY() - c.getY()) * (point.getX() - c.getX()));
	return (part_ab * part_ac * part_bc < 0);
}
