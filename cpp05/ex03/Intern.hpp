#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "Form.hpp"

class Intern {

    public:

        // Constructors and destructor
        Intern();
        Intern(const Intern &src);
        virtual ~Intern();

        // Operator overloads
        Intern&	operator=(const Intern &rhs);

        // Member functions
        Form*   makeForm(const std::string &formType, const std::string& target);

    private:

        // Internal functions
        Form*   createShrubberyCreationForm(const std::string &target);
        Form*   createRobotomyRequestForm(const std::string &target);
        Form*   createPresidentialPardonForm(const std::string &target);

};

typedef Form* (Intern::*createForm)(const std::string&);

struct FormType {

    public:
        const std::string   formName;
        createForm          formCreator;
};

#endif // INTERN_HPP
