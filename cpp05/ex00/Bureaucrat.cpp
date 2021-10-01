#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) :
    _name("default"),
    _grade(150) {
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, const size_t grade) :
    _name(name),
    _grade(grade) {
    if (_grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    } else if (_grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    std::cout << "Bureaucrat initialization constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) :
    _name(src._name),
    _grade(src._grade) {
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &rhs) {
    _grade = rhs._grade;
    std::cout << "Bureaucrat assignement operator called" << std::endl;
    return *this;
}

const std::string&   Bureaucrat::getName(void) const {
    return _name;
}

size_t  Bureaucrat::getGrade(void) const {
    return _grade;
}

void    Bureaucrat::upGrade(void) {
    if (_grade < 2)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void    Bureaucrat::downGrade(void) {
    if (_grade > 149)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Bureaucrat grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Bureaucrat grade is too low";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs) {
    os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
    return os;
}
