#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
	_name("default"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) :
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0) {
	std::cout << "ClapTrap initialization constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) :
	_name(src._name),
	_hitPoints(src._hitPoints),
	_energyPoints(src._energyPoints),
	_attackDamage(src._attackDamage) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap&			ClapTrap::operator=(const ClapTrap &rhs) {
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	std::cout << "ClapTrap assignement operator called" << std::endl;
	return *this;
}

void				ClapTrap::attack(const std::string &target) {

	unsigned int	energy;

	if (_hitPoints == 0) {
		return ;
	}
	energy = (_energyPoints - 10 >= 0) ? 10 : 0;
	_energyPoints -= energy;
	if (energy != 0) {
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing ";
		std::cout << _attackDamage << " points of damage!" << std::endl;
		std::cout << "ClapTrap " << _name << " has " << _energyPoints;
		std::cout << " energy points remaining." << std::endl;
	} else {
		std::cout << "ClapTrap " << _name << " can't attack " << target << "!" << std::endl;
		std::cout << "ClapTrap " << _name << " hasn't enough energy points (";
		std::cout << _energyPoints << " remaining)." << std::endl; 
	}
}

void				ClapTrap::takeDamage(const unsigned int amount) {

	unsigned int	damage;

	if (_hitPoints == 0) {
		return ;
	}
	damage = (_hitPoints - static_cast<int>(amount) > 0) ? amount : _hitPoints;
	_hitPoints -= damage;
	std::cout << "ClapTrap " << _name << " took " << damage;
	std::cout << " points of damage!" << std::endl;
	if (_hitPoints == 0) {
		std::cout << "ClapTrap " << _name << " died." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " has " << _hitPoints;
	std::cout << " health points remaining." << std::endl;
}

void				ClapTrap::beRepaired(const unsigned int amount) {

	if (_hitPoints == 0) {
		return ;
	}
	_hitPoints += amount;
	_energyPoints += amount;
	std::cout << "ClapTrap " << _name << " is healing " << amount;
	std::cout << " health points!" << std::endl;
	std::cout << "ClapTrap " << _name << " is restoring " << amount;
	std::cout << " energy points!" << std::endl;
	std::cout << "ClapTrap " << _name << " has now " << _hitPoints;
	std::cout << " health points and " << _energyPoints;
	std::cout << " energy points." << std::endl;
}
