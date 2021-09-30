#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

    public:

        // Constructors and destructor
        WrongCat();
        WrongCat(const WrongCat &src);
        virtual ~WrongCat();

        // Operator overloads
        WrongCat&	operator=(const WrongCat &rhs);

        // Member functions
        void makeSound(void) const;

};

#endif // WRONGCAT_HPP
