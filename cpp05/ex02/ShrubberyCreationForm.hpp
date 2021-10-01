#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include "Form.hpp"

class ShrubberyCreationForm : public Form {

    public:

        // Constructors and destructor
        ShrubberyCreationForm(const std::string &target);
        ShrubberyCreationForm(const ShrubberyCreationForm &src);
        virtual ~ShrubberyCreationForm();

        // Operator overloads
        ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &rhs);

        // Member functions
        virtual void    execute(const Bureaucrat &executer) const;

    private:

        ShrubberyCreationForm();

};

#endif // SHRUBBERYCREATIONFORM_HPP
