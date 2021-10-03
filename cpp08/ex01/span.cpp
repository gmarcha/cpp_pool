#include <algorithm>
#include <vector>
#include <limits>
#include "span.hpp"

Span::Span(void) :
    _maxSize(0),
    _vector(new std::vector<int>()) {}

Span::Span(unsigned int n) :
    _maxSize(n),
    _vector(new std::vector<int>()) {}

Span::Span(const Span &src) :
    _maxSize(src._maxSize),
    _vector(new std::vector<int>(src._vector->begin(), src._vector->end())) {}

Span::~Span() {
    if (_vector != NULL) {
        delete _vector;
    }
}

Span& Span::operator=(const Span &rhs) {
    _maxSize = rhs._maxSize;
    if (_vector != NULL) {
        delete _vector;
    }
    _vector = new std::vector<int>(rhs._vector->begin(), rhs._vector->end());
    return *this;
}

void    Span::addNumber(int nb) {

    if (_vector == NULL) {
        throw Span::StorageCreationFailed();
    } else if (_vector->size() >= _maxSize) {
        throw Span::SpanLimitReach();
    }
    _vector->push_back(nb);
}

unsigned int    Span::shortestSpan(void) const {

    if (_vector == NULL) {
        throw Span::StorageCreationFailed();
    } else if (_vector->size() < 2) {
        throw Span::SpanImpossible();
    }

    std::vector<int> sortedVector(_vector->begin(), _vector->end());
    std::sort(sortedVector.begin(), sortedVector.end());

    unsigned int shortestSpanValue = std::numeric_limits<unsigned int>::max();
    for (size_t i = 0; i < sortedVector.size() - 1; i++) {
        const unsigned int currentSpanValue = sortedVector[i + 1] - sortedVector[i];
        if (shortestSpanValue > currentSpanValue) {
            shortestSpanValue = currentSpanValue;
        }
    }
    return shortestSpanValue;
}

unsigned int    Span::longestSpan(void) const {

    if (_vector == NULL) {
        throw Span::StorageCreationFailed();
    } else if (_vector->size() < 2) {
        throw Span::SpanImpossible();
    }

    std::vector<int> sortedVector(_vector->begin(), _vector->end());
    std::sort(sortedVector.begin(), sortedVector.end());

    return sortedVector.back() - sortedVector.front();
}

const char* Span::StorageCreationFailed::what() const throw() {
    return "Span storage creation failed";
}

const char* Span::SpanLimitReach::what() const throw() {
    return "Span maximum storage size has been reached";
}

const char* Span::SpanImpossible::what() const throw() {
    return "Span does not contain enough elements";
}
