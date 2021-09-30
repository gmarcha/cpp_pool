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

	ScavTrap	littleRobotCopy(littleRobot);

	std::cout << std::endl;

	littleRobotCopy.beRepaired(20);
	littleRobotCopy.guardGate();

	std::cout << std::endl;

	littleRobotCopy = littleRobot;

	std::cout << std::endl;

	littleRobotCopy.attack("Skag (the only one)");
	littleRobotCopy.takeDamage(42);
	littleRobotCopy.guardGate();

	std::cout << std::endl;

	return (0);
}
