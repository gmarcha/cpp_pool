#include <iostream>
#include <math.h>
#include "Base.hpp"

Base::~Base() {}

Base*   generate(void) {

    const int classToCreate = rand() % 3;

    switch (classToCreate) {
        case 0:
            std::cout << "Generate created a class A" << std::endl;
            return new A();
        case 1:
            std::cout << "Generate created a class B" << std::endl;
            return new B();
        case 2:
            std::cout << "Generate created a class C" << std::endl;
            return new C();
        default:
            return NULL;
    }
}

static void printClassType(char classType) {
    if (classType == 0) {
        std::cout << "dynamic cast failed" << std::endl;
        return ;
    }
    std::cout << classType << std::endl;
}

void    identify_from_pointer(Base* p) {

    char classType = 0;

    if (dynamic_cast<A*>(p) != NULL) {
        classType = 'A';
    } else if (dynamic_cast<B*>(p) != NULL) {
        classType = 'B';
    } else if (dynamic_cast<C*>(p) != NULL) {
        classType = 'C';
    }

    printClassType(classType);
}

void    identify_from_reference(Base& p) {

    char classType = 0;

    try {
        static_cast<void>(dynamic_cast<A&>(p));
        classType = 'A';
    } catch(std::exception &e) {}
    
    try {
        static_cast<void>(dynamic_cast<B&>(p));
        classType = 'B';
    } catch(std::exception &e) {}

    try {
        static_cast<void>(dynamic_cast<C&>(p));
        classType = 'C';
    } catch(std::exception &e) {}

    printClassType(classType);
}
