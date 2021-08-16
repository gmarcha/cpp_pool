#include "Phonebook.hpp"

static bool	is_contact(
	const Phonebook &phonebook,
	const std::string &input_index) {
	return (input_index[0] >= '1' && input_index[0] <= char(48 + phonebook.get_nb_contacts()));
}

int	main(void) {
	Phonebook		phonebook;
	std::string		input;
	std::string		input_index;

	std::cout << FG_CYAN"Enter input: "RESET;
	getline(std::cin, input);
	while (input != "EXIT") {
		if (input == "ADD") {
			phonebook.add();
		} else if (input == "SEARCH") {
			phonebook.print();
			if (phonebook.get_nb_contacts() != 0) {
				std::cout << FG_YELLOW"Enter index: "RESET;
				getline(std::cin, input_index);
				if (input_index.size() == 1 && is_contact(phonebook, input_index) == true) {
					phonebook.search(input_index[0] - 48);
				}
			}
		}
		std::cout << FG_CYAN"Enter input: "RESET;
		getline(std::cin, input);
	}
	return (0);
}
