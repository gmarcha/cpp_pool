#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) :
    ClapTrap() {
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) :
    ClapTrap(name) {
    std::cout << "ScavTrap initialization constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) :
    ClapTrap(src) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &rhs) {
	ClapTrap::operator=(rhs);
	std::cout << "ScavTrap assignement operator called" << std::endl;
	return *this;
}

void    ScavTrap::attack(const std::string &target) {

    unsigned int	energy;

	if (_hitPoints == 0) {
		return ;
	}
	energy = (_energyPoints - 10 >= 0) ? 10 : 0;
	_energyPoints -= energy;
	if (energy != 0) {
		std::cout << "ScavTrap " << _name << " attacks " << target << " viciously, causing ";
		std::cout << _attackDamage << " points of damage!" << std::endl;
		std::cout << "ScavTrap " << _name << " has " << _energyPoints;
		std::cout << " super star energy points remaining." << std::endl;
	} else {
		std::cout << "ScavTrap " << _name << " can't attack " << target << "!" << std::endl;
		std::cout << "ScavTrap " << _name << " hasn't enough super star energy points (";
		std::cout << _energyPoints << " remaining)." << std::endl; 
	}
}

void    ScavTrap::guardGate() const {

    if (_hitPoints == 0) {
		return ;
	}
    std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode." << std::endl;
}
