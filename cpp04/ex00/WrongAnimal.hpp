#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal {

    public:

        // Constructors and destructor
        WrongAnimal();
        WrongAnimal(const WrongAnimal &src);
        virtual ~WrongAnimal();

        // Operator overloads
        WrongAnimal&	operator=(const WrongAnimal &rhs);

        // Member functions
        const std::string& getType(void) const;
        void makeSound(void) const;

    protected:

        WrongAnimal(const std::string &type);

        // Attributes
        const std::string _type;

};

#endif // WRONGANIMAL_HPP
