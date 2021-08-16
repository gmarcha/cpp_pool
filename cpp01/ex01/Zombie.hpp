#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {

	public:

		Zombie(void);
		Zombie(std::string name);
		~Zombie();

		void			announce(void) const;

		void			set_name(std::string name);

	private:

		std::string		_name;

};

Zombie* zombieHorde(int N, std::string name);

#endif // ZOMBIE_HPP
