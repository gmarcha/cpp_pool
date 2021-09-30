#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) :
    ClapTrap(),
    ScavTrap(),
    FragTrap(),
    _name("default") {
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) :
    ClapTrap(name + "_clap_name", 100, 50, 30),
    ScavTrap(name),
    FragTrap(name),
    _name(name) {
    std::cout << "DiamondTrap initialization constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) :
    ClapTrap(src),
    ScavTrap(src),
    FragTrap(src),
    _name(src._name) {
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap&    DiamondTrap::operator=(const DiamondTrap &rhs) {
    ClapTrap::operator=(rhs);
    std::cout << "DiamondTrap assignement operator called" << std::endl;
    return *this;
}

void            DiamondTrap::whoAmI(void) const {
    if (_hitPoints == 0) {
		return ;
	}
    std::cout << "DiamondTrap " << _name << " has ";
    std::cout << ClapTrap::_name << " as ClapTrap name." << std::endl;
}
