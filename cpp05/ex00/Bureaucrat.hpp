#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat {

    public:

        // Constructors and destructor
        Bureaucrat(const std::string &name, const size_t grade = 150);
        Bureaucrat(const Bureaucrat &src);
        virtual ~Bureaucrat();

        // Operator overloads
        Bureaucrat&	operator=(const Bureaucrat &rhs);

        // Member functions
        const std::string getName(void) const;
        size_t getGrade(void) const;
        void upGrade(void);
        void downGrade(void);

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw() {
                    return "Bureaucrat grade is too high";
                }
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw() {
                    return "Bureaucrat grade is too low";
                }
        };

    private:

        Bureaucrat();

        // Attributes
        const std::string   _name;
        size_t              _grade;

};

std::ostream&   operator<<(std::ostream& os, const Bureaucrat& rhs);

#endif // BUREAUCRAT_HPP
