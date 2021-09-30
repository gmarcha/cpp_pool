#include "ScavTrap.hpp"

int main(void) {

	ScavTrap	littleRobot("R2D2"), humanRobot("C3P0");

	std::cout << std::endl;

	littleRobot.attack("Skag");
	littleRobot.attack("Skag");
	littleRobot.takeDamage(42);
	littleRobot.beRepaired(10);
	littleRobot.guardGate();

	std::cout << std::endl;

	humanRobot.attack("Skag (again)");
	humanRobot.takeDamage(142);
	humanRobot.attack("Skag (again)");
	humanRobot.beRepaired(10);

	std::cout << std::endl;

	return (0);
}
