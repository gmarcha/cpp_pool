#include "Point.hpp"

int	main(void) {

	Point	a(0.0f, 0.0f), b(0.0f, 4.0f), c(4.0f, 0.0f);
	Point	p1(1.0f, 1.0f), p2(5.0f, 5.0f), p3(0.0f, 0.0f);

	std::cout << "a:  " << a << std::endl;
	std::cout << "b:  " << b << std::endl;
	std::cout << "c:  " << c << std::endl << std::endl;

	std::cout << "p1: " << p1 << std::endl;
	std::cout << "p2: " << p2 << std::endl;
	std::cout << "p2: " << p3 << std::endl;

	bool	r1 = bsp(a, b, c, p1);
	bool	r2 = bsp(a, b, c, p2);
	bool	r3 = bsp(a, b, c, p3);

	std::cout << "using bsp, is p1 in triangle a,b,c: " << std::boolalpha << r1 << std::endl;
	std::cout << "using bsp, is p2 in triangle a,b,c: " << std::boolalpha << r2 << std::endl;
	std::cout << "using bsp, is p3 in triangle a,b,c: " << std::boolalpha << r3 << std::endl;

	return (0);
}
