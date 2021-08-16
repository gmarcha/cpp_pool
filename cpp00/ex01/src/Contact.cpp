#include "Contact.hpp"

Contact::Contact(void)
:	_first_name(""),
	_last_name(""),
	_nick_name(""),
	_phone_number(""),
	_darkest_secret("") {

}

Contact::~Contact() {

}

std::string	Contact::get_first_name(void) const {
	return (this->_first_name);
}

void		Contact::set_first_name(std::string first_name) {
	this->_first_name = first_name;
}

std::string Contact::get_last_name(void) const {
	return (this->_last_name);
}

void		Contact::set_last_name(std::string last_name) {
	this->_last_name = last_name;
}

std::string	Contact::get_nick_name(void) const {
	return (this->_nick_name);
}

void		Contact::set_nick_name(std::string nick_name) {
	this->_nick_name = nick_name;
}

std::string	Contact::get_phone_number(void) const {
	return (this->_phone_number);
}

void		Contact::set_phone_number(std::string phone_number) {
	this->_phone_number = phone_number;
}

std::string Contact::get_darkest_secret(void) const {
	return (this->_darkest_secret);
}

void		Contact::set_darkest_secret(std::string darkest_secret) {
	this->_darkest_secret = darkest_secret;
}
