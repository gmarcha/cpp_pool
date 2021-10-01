#include <iostream>
#include "Brain.hpp"

Brain::Brain(void) {
    for (size_t i = 0; i < 100; i++) {
        _ideas[i] = "";
    }
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &src) {
    for (size_t i = 0; i < 100; i++) {
        _ideas[i] = src._ideas[i];
    }
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

Brain&  Brain::operator=(const Brain &rhs) {
    for (size_t i = 0; i < 100; i++) {
        _ideas[i] = rhs._ideas[i];
    }
    std::cout << "Brain assignement operator called" << std::endl;
    return *this;
}
