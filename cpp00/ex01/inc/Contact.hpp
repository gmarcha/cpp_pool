#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "include.hpp"

class Contact {

	public:

		Contact(void);
		~Contact();

		std::string	get_first_name(void) const;
		void		set_first_name(std::string);
		std::string	get_last_name(void) const;
		void		set_last_name(std::string);
		std::string	get_nick_name(void) const;
		void		set_nick_name(std::string);
		std::string	get_phone_number(void) const;
		void		set_phone_number(std::string);
		std::string	get_darkest_secret(void) const;
		void		set_darkest_secret(std::string);
	
	private:

		std::string		_first_name;
		std::string		_last_name;
		std::string		_nick_name;
		std::string		_phone_number;
		std::string		_darkest_secret;

};

#endif // CONTACT_HPP
