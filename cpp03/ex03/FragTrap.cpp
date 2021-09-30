#include "FragTrap.hpp"

FragTrap::FragTrap(void) :
    ClapTrap() {
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) :
    ClapTrap(name) {
     std::cout << "FragTrap initialization constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) :
    ClapTrap(src) {
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap &rhs) {
    ClapTrap::operator=(rhs);
    std::cout << "FragTrap assignement operator called" << std::endl;
    return *this;
}

void        FragTrap::highFivesGuys(void) const {
    if (_hitPoints == 0) {
		return ;
	}
    std::cout << "FragTrap " << _name << " does high fives to all his Trap mates!" << std::endl;
}
