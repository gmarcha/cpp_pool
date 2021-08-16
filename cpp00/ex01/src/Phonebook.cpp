#include "Phonebook.hpp"

Phonebook::Phonebook(void) : _nb_contacts(0), _start_contact(0) {
	for (int i = 0; i < 8; i++) {
		this->_contacts[i] = Contact();
	}
}

Phonebook::~Phonebook() {

}

void		Phonebook::add() {
	size_t		index;
	std::string	input;

	if (_nb_contacts == 8) {
		index = _start_contact % 8;
		_start_contact++;
	} else {
		index = _nb_contacts;
		_nb_contacts++;
	}

	std::cout << "Enter first name: ";
	std::cin >> input;
	_contacts[index].set_first_name(input);

	std::cout << "Enter last name: ";
	std::cin >> input;
	_contacts[index].set_last_name(input);

	std::cout << "Enter nickname: ";
	std::cin >> input;
	_contacts[index].set_nick_name(input);

	std::cout << "Enter phone number: ";
	std::cin >> input;
	_contacts[index].set_phone_number(input);

	std::cout << "Enter darkest secret: ";
	std::cin >> input;
	_contacts[index].set_darkest_secret(input);

}

void		Phonebook::search(const size_t input_index) const {
	search_infos(_contacts[input_index - 1]);
}

void		Phonebook::search_infos(const Contact &contact) const {
	std::cout << contact.get_first_name() << std::endl;
	std::cout << contact.get_last_name() << std::endl;
	std::cout << contact.get_nick_name() << std::endl;
	std::cout << contact.get_phone_number() << std::endl;
}

void		Phonebook::print() const {
	size_t			index = 1;

	for (size_t i = _start_contact; i < _nb_contacts; i++) {
		std::cout << "         " << index;
		print_contacts(_contacts[i].get_first_name());
		print_contacts(_contacts[i].get_last_name());
		print_contacts(_contacts[i].get_nick_name());
		std::cout << std::endl;
		index++;
	}
	for (size_t i = 0; i < _start_contact; i++) {
		std::cout << "         " << index;
		print_contacts(_contacts[i].get_first_name());
		print_contacts(_contacts[i].get_last_name());
		print_contacts(_contacts[i].get_nick_name());
		std::cout << std::endl;
		index++;
	}
}

void		Phonebook::print_contacts(std::string output) const {

	std::cout << "|";
	if (output.size() > 10) {
		std::cout << output.substr(0, 9) << ".";
	} else {
		for (size_t pad = 0; pad < 10 - output.size(); pad++) {
			std::cout << " ";
		}
		std::cout << output;
	}
}

size_t		Phonebook::get_nb_contacts(void) const {
	return (this->_nb_contacts);
}
