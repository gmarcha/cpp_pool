#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name), _weapon(0) {

}

HumanB::~HumanB() {

}

void				HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

void				HumanB::attack() const {
	std::cout << this->_name <<  " attacks with his " << this->_weapon->getType() << std::endl;
}

