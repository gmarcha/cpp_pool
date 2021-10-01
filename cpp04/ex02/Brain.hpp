#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain {

    public:

        // Constructors and destructor
        Brain();
        Brain(const Brain &src);
        virtual ~Brain();

        // Operator overloads
        Brain&	operator=(const Brain &rhs);

    private:

        // Attributes
        std::string _ideas[100];

};

#endif // BRAIN_HPP
