#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal {

    public:

        // Constructors and destructor
        Animal();
        Animal(const Animal &src);
        virtual ~Animal();

        // Operator overloads
        Animal&	operator=(const Animal &rhs);

        // Member functions
        const std::string& getType(void) const;
        virtual void makeSound(void) const = 0;

    protected:

        Animal(const std::string &type);

        // Attributes
        const std::string _type;

};

#endif // ANIMAL_HPP
