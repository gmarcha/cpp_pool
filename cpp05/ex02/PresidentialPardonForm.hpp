#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form {

    public:

        // Constructors and destructor
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm &src);
        virtual ~PresidentialPardonForm();

        // Operator overloads
        PresidentialPardonForm&	operator=(const PresidentialPardonForm &rhs);

        // Member functions
        virtual void    execute(const Bureaucrat &executer) const;

    private:

        PresidentialPardonForm();

};

#endif // PRESIDENTIALPARDONFORM_HPP
