#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {

    public:

        // Constructors and destructor
        Ice(void);
        Ice(const Ice &src);
        virtual ~Ice();

        // Operator overloads
        Ice&	operator=(const Ice &rhs);

        // Member functions
        virtual AMateria*   clone(void) const;
        virtual void        use(ICharacter &target);        

};

#endif // ICE_HPP
