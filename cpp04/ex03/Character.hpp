#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter {

    public:

        // Constructors and destructor
        Character(const std::string &name);
        Character(const Character &src);
        virtual ~Character();

        // Operator overloads
        Character&	operator=(const Character &rhs);

        // Member functions
        virtual const std::string& getName() const;

        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);

    private:

        Character();

        // Attributes
        const std::string   _name;
        AMateria*           _materia[4];

};

#endif // CHARACTER_HPP
