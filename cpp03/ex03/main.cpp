#include "DiamondTrap.hpp"

int main(void) {

	DiamondTrap	simpleAndroid("Marvin"), superComputer("DeepThought");

	std::cout << std::endl;

	simpleAndroid.whoAmI();
	simpleAndroid.attack("Astrostoper");
	simpleAndroid.attack("Astrostoper");
	simpleAndroid.takeDamage(42);
	simpleAndroid.beRepaired(10);
	simpleAndroid.guardGate();
	simpleAndroid.highFivesGuys();

	std::cout << std::endl;

	superComputer.whoAmI();
	superComputer.attack("Galaxy Vice-President");
	superComputer.takeDamage(142);
	superComputer.attack("Galaxy Vice-President");
	superComputer.beRepaired(10);
	superComputer.guardGate();
	superComputer.highFivesGuys();
	superComputer.whoAmI();

	std::cout << std::endl;

	DiamondTrap	simpleAndroidCopy(simpleAndroid);

	std::cout << std::endl;

	simpleAndroidCopy.whoAmI();
	simpleAndroidCopy.beRepaired(20);
	simpleAndroidCopy.guardGate();
	simpleAndroidCopy.highFivesGuys();

	std::cout << std::endl;

	simpleAndroidCopy = simpleAndroid;

	std::cout << std::endl;

	simpleAndroidCopy.whoAmI();
	simpleAndroidCopy.attack("Emperor of Universe");
	simpleAndroidCopy.takeDamage(42);
	simpleAndroidCopy.guardGate();
	simpleAndroidCopy.highFivesGuys();

	std::cout << std::endl;

	return (0);
}
