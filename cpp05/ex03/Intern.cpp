#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void) {
    std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(__attribute__((unused)) const Intern &src) {
    std::cout << "Intern copy constructor called" << std::endl;
}

Intern::~Intern() {
    std::cout << "Intern destructor called" << std::endl;
}

Intern& Intern::operator=(__attribute__((unused)) const Intern &rhs) {
    std::cout << "Intern assignement operator called" << std::endl;
    return *this;
}

Form*   Intern::makeForm(const std::string &formType, const std::string &target) {

    const FormType  formList[] = {
        { "shrubbery creation", &Intern::createShrubberyCreationForm },
        { "robotomy request", &Intern::createRobotomyRequestForm },
        { "presidential pardon", &Intern::createPresidentialPardonForm }
    };

    for (size_t i = 0; i < 3; i++) {
        if (formType == formList[i].formName) {
            std::cout << "Intern creates " << formType << std::endl;
            return (this->*formList[i].formCreator)(target);
        }
    }
    std::cout << "Intern cannot create form because " << formType;
    std::cout << " is not a valid form name" << std::endl;
    return NULL;
}

Form*   Intern::createShrubberyCreationForm(const std::string &target) {
    return new ShrubberyCreationForm(target);
}

Form*   Intern::createRobotomyRequestForm(const std::string &target) {
    return new RobotomyRequestForm(target);
}

Form*   Intern::createPresidentialPardonForm(const std::string &target) {
    return new PresidentialPardonForm(target);
}
