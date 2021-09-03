#include "ClapTrap.hpp"

int main(void) {

	ClapTrap	a("CL4P-TP");
	ClapTrap	b("CAPS-TP");

	std::cout << std::endl;

	a.attack("Skag");
	a.attack("Skag");
	a.takeDamage(42);
	a.beRepaired(10);

	std::cout << std::endl;

	b.attack("Skag (again)");
	b.takeDamage(9);
	b.beRepaired(10);

	std::cout << std::endl;

	return (0);
}
