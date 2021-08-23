#include "Karen.hpp"

int	main(int ac, char *av[]) {

	if (ac != 2) {
		std::cout << "Error: invalid number of argument" << std::endl;
		return (1);
	}

	const std::string	input(av[1]);
	const std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int					level = 0;
	Karen				karen;

	for (int i = 0; i < 4; i++) {
		if (levels[i] == input)
			level = i + 1;
	}

	switch (level) {
		case DEBUG:
			std::cout << "[ DEBUG ]" << std::endl;
			karen.debug();
			std::cout << std::endl;
		case INFO:
			std::cout << "[ INFO ]" << std::endl;
			karen.info();
			std::cout << std::endl;
		case WARNING:
			std::cout << "[ WARNING ]" << std::endl;
			karen.warning();
			std::cout << std::endl;
		case ERROR:
			std::cout << "[ ERROR ]" << std::endl;
			karen.error();
			std::cout << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}

	return (0);
}
