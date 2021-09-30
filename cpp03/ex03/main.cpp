#include "DiamondTrap.hpp"

int main(void) {

	DiamondTrap	basicRobot("Marvin"), advancedRobot("DeepThought");

	std::cout << std::endl;

	basicRobot.whoAmI();
	basicRobot.attack("Astrostoper");
	basicRobot.attack("Astrostoper");
	basicRobot.takeDamage(42);
	basicRobot.beRepaired(10);
	basicRobot.guardGate();
	basicRobot.highFivesGuys();

	std::cout << std::endl;

	advancedRobot.whoAmI();
	advancedRobot.attack("Galaxy Vice-President");
	advancedRobot.takeDamage(142);
	advancedRobot.attack("Galaxy Vice-President");
	advancedRobot.beRepaired(10);
	advancedRobot.guardGate();
	advancedRobot.highFivesGuys();
	advancedRobot.whoAmI();

	std::cout << std::endl;

	DiamondTrap	basicRobotCopy(basicRobot);

	std::cout << std::endl;

	basicRobotCopy.whoAmI();
	basicRobotCopy.beRepaired(20);
	basicRobotCopy.guardGate();
	basicRobotCopy.highFivesGuys();

	std::cout << std::endl;

	basicRobotCopy = basicRobot;

	std::cout << std::endl;

	basicRobotCopy.whoAmI();
	basicRobotCopy.attack("Emperor of Universe");
	basicRobotCopy.takeDamage(42);
	basicRobotCopy.guardGate();
	basicRobotCopy.highFivesGuys();

	std::cout << std::endl;

	return (0);
}
