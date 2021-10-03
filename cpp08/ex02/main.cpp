#include <iostream>
#include <stack>
#include "mutantstack.hpp"

int main(void) {

    std::cout << "=== BASIC TESTS ===" << std::endl;

    std::stack<int> stackA;

    stackA.push(-1);
    stackA.push(42);

    std::cout << stackA.top() << std::endl;

    MutantStack<int> stackB;

    stackB.push(-1);
    stackB.push(42);

    std::cout << stackB.top() << std::endl;

    MutantStack<int> stackC(stackB);

    std::cout << stackC.top() << std::endl;

    MutantStack<int> stackD;

    stackD = stackC;
    std::cout << stackC.top() << std::endl;

    return 0;
}
