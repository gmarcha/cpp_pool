#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

    public:

        DiamondTrap(const std::string &name);
        DiamondTrap(const DiamondTrap &src);
        virtual ~DiamondTrap();

        DiamondTrap&    operator=(const DiamondTrap &rhs);

        void            whoAmI(void) const;

    private:

        DiamondTrap(void);

        const std::string   _name;

};

#endif // DIAMONDTRAP_HPP
