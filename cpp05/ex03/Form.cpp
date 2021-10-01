#include "Form.hpp"

Form::Form(void) :
    _name("default"),
    _target("default_target"),
    _isSigned(false),
    _gradeToSign(150),
    _gradeToExecute(150) {
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(
    const std::string &name,
    const std::string &target,
    const size_t gradeToSign,
    const size_t gradeToExecute
) :
    _name(name),
    _target(target),
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
    _target(src._target),
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

const std::string&  Form::getTarget(void) const {
    return _target;
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

void    Form::execute(const Bureaucrat &executer) const {
    if (_isSigned == false) {
        throw Form::IsNotSigned();
    } else if (_gradeToExecute < executer.getGrade()) {
        throw Form::GradeTooHighException();
    }
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Form grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Form grade is too low";
}

const char* Form::IsNotSigned::what() const throw() {
    return "Form is not signed";
}

std::ostream&   operator<<(std::ostream& os, const Form &rhs) {
    os << rhs.getName() << " for " << rhs.getTarget() << " is " << (!rhs.getSignedStatus() ? "not " : "") << "signed. ";
    os << "For signing, grade must be at maximum " << rhs.getGradeToSign() << " and ";
    os << "for execution, grade must be at maximum " << rhs.getGradeToExecute() << ".";
    return os;
}
