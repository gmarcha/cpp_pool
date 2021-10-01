#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :
    Form("RobotomyRequestForm", "default", 72, 45) {
    srand(time(NULL));
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
    Form("RobotomyRequestForm", target, 72, 45) {
    srand(time(NULL));
    std::cout << "RobotomyRequestForm initialization constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) :
    Form(src) {
    srand(time(NULL));
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm&  RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
    Form::operator=(rhs);
    std::cout << "RobotomyRequestForm assignement operator called" << std::endl;
    return *this;
}

void    RobotomyRequestForm::execute(const Bureaucrat &executer) const {
    Form::execute(executer);
    std::cout << " * Bzzzzz bzzzzzzzz bzzzzzzzzz... Shrink * " << std::endl;
    const int robotomySuccess = rand() % 2;
    if (robotomySuccess == 0) {
        std::cout << "Robotomy operation miserably failed" << std::endl;
    } else if (robotomySuccess == 1) {
        std::cout << "Robotomy operation gracefully worked on " << _target << std::endl;
    }
}
