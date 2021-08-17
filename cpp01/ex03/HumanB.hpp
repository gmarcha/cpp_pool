#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {

	public:

		HumanB(const std::string &name);
		~HumanB();

		void				attack(void);
		void				setWeapon(const Weapon &Weapon);

	private:

		Weapon				*_weapon;
		const std::string	_name;

};

#endif // HUMANB_HPP
