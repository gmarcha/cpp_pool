#include <ostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {

    Intern  formCreator;

    std::cout << std::endl;

    {
        Form* form(formCreator.makeForm("shrubbery creation", "Tree"));
        delete form;
    }

    std::cout << std::endl;

    {
        Form* form(formCreator.makeForm("robotomy request", "Marvin"));
        delete form;
    }

    std::cout << std::endl;

    {
        Form* form(formCreator.makeForm("presidential pardon", "Arthur"));
        delete form;
    }

    std::cout << std::endl;

    {
        Form* form(formCreator.makeForm("internal vulnerability", "Error"));
        delete form;
    }

    std::cout << std::endl;

    {
        Bureaucrat boss("Michael", 1);
        Form* form(formCreator.makeForm("presidential pardon", "Trevor"));
        boss.signForm(*form);
        boss.executeForm(*form);
        delete form;
    }

    std::cout << std::endl;

    return 0;
}
