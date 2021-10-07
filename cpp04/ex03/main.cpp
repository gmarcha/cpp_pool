#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void) {

    MateriaSource* matSrc = new MateriaSource();

    matSrc->learnMateria(new Ice());
    matSrc->learnMateria(new Cure());

    Character   humanA("Michael");
    Character   humanB("Trevor");

    AMateria*   tmpMat = NULL;

    tmpMat = matSrc->createMateria("Ice");
    humanA.equip(tmpMat);
    tmpMat = matSrc->createMateria("Cure");
    humanA.equip(tmpMat);

    humanA.use(0, humanB);
    humanA.use(1, humanB);

    humanA.unequip(1);
    humanA.use(1, humanB);
    humanA.unequip(1);

    delete matSrc;
    delete tmpMat;
    return 0;
}
