#include "Form.hpp"

Form::Form(void) :
    _name("default"),
    _isSigned(false),
    _gradeToSign(150),
    _gradeToExecute(150) {
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(
    const std::string &name,
    const size_t gradeToSign,
    const size_t gradeToExecute
) :
    _name(name),
    _isSigned(false),
    _gradeToSign(gradeToSign),
    _gradeToExecute(gradeToExecute) {
    if (_gradeToSign < 1 || _gradeToExecute < 1) {
        throw Form::GradeTooHighException();
    } else if (_gradeToSign > 150 || _gradeToExecute > 150) {
        throw Form::GradeTooLowException();
    }
    std::cout << "Form initialization constructor called" << std::endl;
}

Form::Form(const Form &src) :
    _name(src._name),
    _isSigned(src._isSigned),
    _gradeToSign(src._gradeToSign),
    _gradeToExecute(src._gradeToExecute) {
    std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form() {
    std::cout << "Form destructor called" << std::endl;
}

Form&   Form::operator=(const Form &rhs) {
    _isSigned = rhs._isSigned;
    std::cout << "Form assignement operator called" << std::endl;
    return *this;
}

const std::string&  Form::getName(void) const {
    return _name;
}

bool    Form::getSignedStatus(void) const {
    return _isSigned;
}

size_t    Form::getGradeToSign(void) const {
    return _gradeToSign;
}

size_t    Form::getGradeToExecute(void) const {
    return _gradeToExecute;
}

Form&   Form::beSigned(const Bureaucrat &signer) {
    if (_gradeToSign < signer.getGrade()) {
        throw Form::GradeTooHighException();
    }
    _isSigned = true;
    return *this;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Form grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Form grade is too low";
}

std::ostream&   operator<<(std::ostream& os, const Form &rhs) {
    os << rhs.getName() << " is " << (!rhs.getSignedStatus() ? "not " : "") << "signed. ";
    os << "The grade to sign is set to " << rhs.getGradeToSign() << " and ";
    os << "the grade to execute is set to " << rhs.getGradeToExecute() << ".";
    return os;
}
