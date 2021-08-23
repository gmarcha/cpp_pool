#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {

	public:

		HumanB(const std::string &name);
		~HumanB();

		void				setWeapon(Weapon &weapon);
		void				attack(void) const;

	private:

		const std::string	_name;
		Weapon				*_weapon;

};

#endif // HUMANB_HPP
