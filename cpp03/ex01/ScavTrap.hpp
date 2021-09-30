#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

    public:

        ScavTrap(const std::string &name);
        ScavTrap(const ScavTrap &src);
        virtual ~ScavTrap();

        ScavTrap&       operator=(const ScavTrap &rhs);

        virtual void    attack(const std::string &target);
        void            guardGate() const;

    private:

        ScavTrap(void);

};

#endif // SCAVTRAP_HPP
