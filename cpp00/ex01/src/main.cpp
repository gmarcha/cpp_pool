#include "Phonebook.hpp"

int	main(void) {
	Phonebook		phonebook;
	std::string		input;
	std::string		input_index;

	std::cout << "Enter input: ";
	std::cin >> input;
	while (input != "EXIT") {
		if (input == "ADD") {
			phonebook.add();
		} else if (input == "SEARCH") {
			phonebook.print();
			if (phonebook.get_nb_contacts() != 0) {
				std::cout << "Enter index: ";
				std::cin >> input_index;
				if (input_index.size() == 1 || (input_index[0] >= '1' && input_index[0] <= char(48 + phonebook.get_nb_contacts()))) {
					std::cout << input_index[0] << std::endl;
					phonebook.search(input_index[0]);
				}
			}
		}
		std::cout << "Enter input: ";
		std::cin >> input;
	}
	return (0);
}
