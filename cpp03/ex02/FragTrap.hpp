#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

    public:

        FragTrap(const std::string &name);
        FragTrap(const FragTrap &src);
        virtual ~FragTrap();

        FragTrap&   operator=(const FragTrap &rhs);

        void        highFivesGuys(void) const;

    private:

        FragTrap(void);
    
};

#endif // FRAGTRAP_HPP
