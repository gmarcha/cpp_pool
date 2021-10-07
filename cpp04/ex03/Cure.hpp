#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {

    public:

        // Constructors and destructor
        Cure(void);
        Cure(const Cure &src);
        virtual ~Cure();

        // Operator overloads
        Cure&	operator=(const Cure &rhs);

        // Member functions
        virtual AMateria*   clone(void) const;
        virtual void        use(ICharacter &target);        

};

#endif // CURE_HPP
