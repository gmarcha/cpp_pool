#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    for (size_t i = 0; i < 4; i++) {
        _materia[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &src) {
    for (size_t i = 0; i < 4; i++) {
        _materia[i] = src._materia[i]->clone();
    }
}

MateriaSource::~MateriaSource() {
    for (size_t i = 0; i < 4; i++) {
        if (_materia[i] != NULL) {
            delete _materia[i];
            _materia[i] = NULL;
        }
    }
}

MateriaSource&  MateriaSource::operator=(const MateriaSource &rhs) {
    for (size_t i = 0; i < 4; i++) {
        if (_materia[i] != NULL) {
            delete _materia[i];
        }
        _materia[i] = rhs._materia[i]->clone();
    }
    return *this;
}

void    MateriaSource::learnMateria(AMateria* materia) {
    for (size_t i = 0; i < 4; i++) {
        if (_materia[i] == NULL) {
            _materia[i] = materia;
            break ;
        }
    }
}

AMateria*   MateriaSource::createMateria(const std::string &type) {
    for (size_t i = 0; i < 4; i++) {
        if (_materia[i] != NULL && _materia[i]->getType() == type) {
            return _materia[i]->clone();
        }
    }
    return NULL;
}
