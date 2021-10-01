#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form {

    public:

        // Constructors and destructor
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(const RobotomyRequestForm &src);
        virtual ~RobotomyRequestForm();

        // Operator overloads
        RobotomyRequestForm&	operator=(const RobotomyRequestForm &rhs);

        // Member functions
        virtual void    execute(const Bureaucrat &executer) const;

    private:

        RobotomyRequestForm();

};

#endif // ROBOTOMYREQUESTFORM_HPP
