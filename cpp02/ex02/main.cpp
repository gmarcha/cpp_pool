#include "Fixed.hpp"

int	main(void) {

	Fixed 		x;
	Fixed		y(42);

	const Fixed add(Fixed(10) + Fixed(12) + Fixed(20));
	const Fixed sub(Fixed(142) - Fixed(42) - Fixed(58.0f));
	const Fixed mul(Fixed(42) * Fixed(0.25f) * Fixed(2));
	const Fixed div(Fixed(105) / Fixed(2) / Fixed(2.5f));

	std::cout << "x:            " << x << std::endl;
	std::cout << "++x:          " << ++x << std::endl;
	std::cout << "x:            " << x << std::endl;
	std::cout << "x++:          " << x++ << std::endl;
	std::cout << "x:            " << x << std::endl << std::endl;

	std::cout << "add:          " << add << std::endl;
	std::cout << "sub:          " << sub << std::endl;
	std::cout << "mul:          " << mul << std::endl;
	std::cout << "div:          " << div << std::endl << std::endl;

	std::cout << "add == sub:   " << std::boolalpha << (add == sub) << std::endl;
	std::cout << "add == x:     " << std::boolalpha << (add == x) << std::endl;
	std::cout << "add != sub:   " << std::boolalpha << (add != sub) << std::endl;
	std::cout << "add != x:     " << std::boolalpha << (add != x) << std::endl << std::endl;

	std::cout << "add < sub:    " << std::boolalpha << (add < sub) << std::endl;
	std::cout << "add < x:      " << std::boolalpha << (add < x) << std::endl;
	std::cout << "add > sub:    " << std::boolalpha << (add > sub) << std::endl;
	std::cout << "add > x:      " << std::boolalpha << (add > x) << std::endl << std::endl;

	std::cout << "add <= sub:   " << std::boolalpha << (add <= sub) << std::endl;
	std::cout << "add <= x:     " << std::boolalpha << (add <= x) << std::endl;
	std::cout << "add >= sub:   " << std::boolalpha << (add >= sub) << std::endl;
	std::cout << "add >= x:     " << std::boolalpha << (add >= x) << std::endl << std::endl;

	std::cout << "max(add,mul): " << Fixed::max(add,mul) << std::endl;
	std::cout << "min(add,mul): " << Fixed::min(add,mul) << std::endl;

	std::cout << "max(x,y):     " << Fixed::max(x,y) << std::endl;
	std::cout << "min(x,y):     " << Fixed::min(x,y) << std::endl;

	return (0);
}
