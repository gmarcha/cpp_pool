#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void) {

    Animal*      zoo[10] = {
        new Dog(),
        new Dog(),
        new Dog(),
        new Dog(),
        new Dog(),
        new Cat(),
        new Cat(),
        new Cat(),
        new Cat(),
        new Cat()
    };

    for (size_t i = 0; i < 10; i++) {
        std::cout << std::endl;
        delete zoo[i];
    }

    std::cout << std::endl;

    Animal*       dog = new Dog();
    Animal*       test = new Dog(*dog);

    std::cout << std::endl;

    *dog = *test;

    std::cout << std::endl;

    delete dog;
    delete test;
}
