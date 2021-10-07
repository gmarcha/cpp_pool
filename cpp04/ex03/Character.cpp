#include "Character.hpp"

Character::Character(void) :
    _name("unknown") {
    for (size_t i = 0; i < 4; i++) {
        _materia[i] = NULL;
    }
}

Character::Character(const std::string &name) :
    _name(name) {
    for (size_t i = 0; i < 4; i++) {
        _materia[i] = NULL;
    }
}

Character::Character(const Character &src) :
    _name(src._name) {
    for (size_t i = 0; i < 4; i++) {
        _materia[i] = src._materia[i]->clone();
    }
}

Character::~Character() {
    for (size_t i = 0; i < 4; i++) {
        if (_materia[i] != NULL) {
            delete _materia[i];
            _materia[i] = NULL;
        }
    }
}

Character&  Character::operator=(const Character &rhs) {

    for (size_t i = 0; i < 4; i++) {
        if (_materia[i] != NULL) {
            delete _materia[i];
        }
        _materia[i] = rhs._materia[i]->clone();
    }
    return *this;
}

const std::string&  Character::getName(void) const {
    return _name;
}

void    Character::equip(AMateria* m) {
    for (size_t i = 0; i < 4; i++) {
        if (_materia[i] == NULL) {
            _materia[i] = m;
            break ;
        }
    }
}

void    Character::unequip(int idx) {
    if (idx >= 0 && idx < 4) {
        _materia[idx] = NULL;
    }
}

void    Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && _materia[idx] != NULL) {
        _materia[idx]->use(target);
    }
}
