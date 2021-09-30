#include "FragTrap.hpp"

int main(void) {

	FragTrap	basicRobot("T-800"), advancedRobot("T-1000");

	std::cout << std::endl;

	basicRobot.attack("Resistant Volunteer");
	basicRobot.attack("Resistant Volunteer");
	basicRobot.takeDamage(42);
	basicRobot.beRepaired(10);
	basicRobot.highFivesGuys();

	std::cout << std::endl;

	advancedRobot.attack("Resistant Milician");
	advancedRobot.takeDamage(142);
	advancedRobot.attack("Resistant Milician");
	advancedRobot.beRepaired(10);

	std::cout << std::endl;

	FragTrap	basicRobotCopy(basicRobot);

	std::cout << std::endl;

	basicRobotCopy.beRepaired(20);
	basicRobotCopy.highFivesGuys();

	std::cout << std::endl;

	basicRobotCopy = basicRobot;

	std::cout << std::endl;

	basicRobotCopy.attack("Captain of Resistance");
	basicRobotCopy.takeDamage(42);
	basicRobotCopy.highFivesGuys();

	std::cout << std::endl;

	return (0);
}
