#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "include.hpp"
# include "Contact.hpp"

class Phonebook {

	public:

		Phonebook(void);
		~Phonebook();

		void			add();
		void			search(const size_t input_index) const;
		void			print() const;

		size_t			get_nb_contacts(void) const;

	private:

		void			search_infos(const Contact &contact) const;
		void			print_contacts(std::string output) const;

		Contact			_contacts[8];
		size_t			_nb_contacts;
		size_t			_start_contact;

};

#endif // PHONEBOOK_HPP
