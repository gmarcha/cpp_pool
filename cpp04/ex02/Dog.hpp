#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

    public:

        // Constructors and destructor
        Dog();
        Dog(const Dog &src);
        virtual ~Dog();

        // Operator overloads
        Dog&	operator=(const Dog &rhs);

        // Member functions
        virtual void makeSound(void) const;

    private:

        // Attributes
        Brain*        _brain;

};

#endif // DOG_HPP
