#include "iostream"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {

    {
        const Animal *animal = new Animal();
        const Animal *dog = new Dog();
        const Animal *cat = new Cat();

        std::cout << std::endl;

        std::cout << "animal type is " << animal->getType() << std::endl;
        animal->makeSound();
        delete animal;

        std::cout << std::endl;

        std::cout << "dog type is " << dog->getType() << std::endl;
        dog->makeSound();
        delete dog;

        std::cout << std::endl;

        std::cout << "cat type is " << cat->getType() << std::endl;
        cat->makeSound();
        delete cat;
    }

    std::cout << std::endl << std::endl;

    {
        const WrongAnimal *wrongAnimal = new WrongAnimal();
        const WrongAnimal *wrongCat = new WrongCat();

        std::cout << std::endl;

        std::cout << "wrongAnimal type is " << wrongAnimal->getType() << std::endl;
        wrongAnimal->makeSound();
        delete wrongAnimal;

        std::cout << std::endl;

        std::cout << "wrongCat type is " << wrongCat->getType() << std::endl;
        wrongCat->makeSound();
        delete wrongCat;
    }
    return 0;
}
