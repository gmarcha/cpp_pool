#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {

	public:
	
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &src);
		virtual ~ClapTrap();

		ClapTrap&		operator=(const ClapTrap &rhs);

		void			attack(const std::string &target);
		void			takeDamage(const unsigned int amount);
		void			beRepaired(const unsigned int amount);

	private:

		ClapTrap(void);

		const std::string		_name;
		int						_hitPoints;
		int						_energyPoints;
		int						_attackDamage;

};

#endif // CLAPTRAP_HPP
