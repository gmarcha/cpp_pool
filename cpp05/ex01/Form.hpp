#ifndef FORM_HPP
# define FORM_HPP

# include <ostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

    public:

        // Constructors and destructor
        Form(
            const std::string &name,
            const size_t gradeToSign = 150,
            const size_t gradeToExecute = 150
        );
        Form(const Form &src);
        virtual ~Form();

        // Operator overloads
        Form&	operator=(const Form &rhs);

        // Member functions
        const std::string&  getName(void) const;
        bool                getSignedStatus(void) const;
        size_t              getGradeToSign(void) const;
        size_t              getGradeToExecute(void) const;

        Form&               beSigned(const Bureaucrat &signer);

        class GradeTooHighException: public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException: public std::exception {
            public:
                virtual const char* what() const throw();
        };

    private:

        Form();

        // Attributes
        const std::string   _name;
        bool                _isSigned;
        const size_t        _gradeToSign;
        const size_t        _gradeToExecute;

};

std::ostream&   operator<<(std::ostream& os, const Form &rhs);

#endif // FORM_HPP
