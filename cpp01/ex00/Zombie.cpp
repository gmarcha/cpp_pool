#include "Zombie.hpp"

Zombie::Zombie(void) : _name("Unknown") {

}

Zombie::Zombie(std::string name) : _name(name) {

}

Zombie::~Zombie() {
	std::cout << this->_name << " died" << std::endl;
}

void	Zombie::announce(void) const {
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
