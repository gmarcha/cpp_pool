#include "Zombie.hpp"

int	main(void) {

	{
		Zombie *zombies = zombieHorde(1, "Rick");
		for (int i = 0; i < 1; i++) {
			zombies[i].announce();
		}
		delete []zombies;
	}

	{
		Zombie *zombies = zombieHorde(2, "Shane");
		for (int i = 0; i < 2; i++) {
			zombies[i].announce();
		}
		delete []zombies;
	}

	{
		Zombie *zombies = zombieHorde(3, "Daryl");
		for (int i = 0; i < 3; i++) {
			zombies[i].announce();
		}
		delete []zombies;
	}

	return (0);
}
