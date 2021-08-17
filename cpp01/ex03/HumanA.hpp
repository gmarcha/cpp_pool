#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {

	public:

		HumanA(const std::string &name, const Weapon &weapon);
		~HumanA();

		void				attack(void);

	private:

		Weapon				&_weapon;
		const std::string	_name;

};

#endif // HUMANA_HPP
