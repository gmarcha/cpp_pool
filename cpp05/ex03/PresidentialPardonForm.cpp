#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
    Form("PresidentialPardonForm", "default", 25, 5) {
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
    Form("PresidentialPardonForm", target, 25, 5) {
    std::cout << "PresidentialPardonForm initialization constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) :
    Form(src) {
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm&  PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
    Form::operator=(rhs);
    std::cout << "PresidentialPardonForm assignement operator called" << std::endl;
    return *this;
}

void    PresidentialPardonForm::execute(const Bureaucrat &executer) const {
    Form::execute(executer);
    std::cout << _target << " has been forgiven by Zafod Beeblebrox" << std::endl;
}
