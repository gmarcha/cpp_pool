#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

    public:

        // Constructors and destructor
        Cat();
        Cat(const Cat &src);
        virtual ~Cat();

        // Operator overloads
        Cat&	operator=(const Cat &rhs);

        // Member functions
        virtual void makeSound(void) const;

    private:

        // Attributes
        Brain*        _brain;

};

#endif // CAT_HPP
