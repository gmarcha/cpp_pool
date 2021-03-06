#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void				Karen::complain(std::string level) {

	t_complain		complains[] = {
						{"DEBUG", &Karen::debug},
						{"INFO", &Karen::info},
						{"WARNING", &Karen::warning},
						{"ERROR", &Karen::error}
	};

	for (int i = 0; i < 4; i++) {
		if (complains[i].complain == level) {
			(this->*complains[i].level)();
		}
	}
}

void				Karen::debug(void) const {
	std::cout << 	"I love to get extra bacon for my 7XL-double-cheese"
					"-triple-pickle-special-ketchup burger. I just love "
					"it!" << std::endl;
}

void				Karen::info(void) const {
	std::cout <<	"I cannot believe adding extra bacon cost more money."
					" You don’t put enough! If you did I would not have "
					"to ask for it!" << std::endl;
}

void				Karen::warning(void) const {
	std::cout << 	"I think I deserve to have some extra bacon for free."
					" I’ve been coming here for years and you just "
					"started working here last month." << std::endl;
}

void				Karen::error(void) const {
	std::cout <<	"This is unacceptable, I want to speak to the manager "
					"now." << std::endl;
}
