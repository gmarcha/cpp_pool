#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {

    public:

        // Constructors and destructor
        AMateria(const std::string &type);
        AMateria(const AMateria &src);
        virtual ~AMateria();

        // Operator overloads
        AMateria&	operator=(const AMateria &rhs);

        // Member functions
        const std::string&  getType(void) const;

        virtual AMateria*   clone(void) const = 0;
        virtual void        use(ICharacter &target);

    protected:

        const std::string _type;

    private:

        AMateria();

};

#endif // AMATERIA_HPP
