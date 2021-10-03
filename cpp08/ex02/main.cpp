#include <iostream>
#include <list>
#include <stack>
#include "mutantstack.hpp"

static void printBasicInfo(int &stackElement, size_t sizeStack) {
    std::cout << "First element on stack is " << stackElement;
    std::cout << " and stack size is " << sizeStack;
    std::cout << std::endl;
}

static void printMoreInfo(int &listElement, size_t sizeList, int &stackElement, size_t sizeStack) {
    std::cout << "First element in list  is " << listElement;
    std::cout << " and list  size is " << sizeList;
    std::cout << std::endl;
    printBasicInfo(stackElement, sizeStack);
}

int main(void) {

    std::cout << "=== BASIC TESTS ===" << std::endl << std::endl;

    std::stack<int> stackA;

    stackA.push(-1);
    stackA.push(42);

    printBasicInfo(stackA.top(), stackA.size());

    MutantStack<int> stackB;

    stackB.push(-1);
    stackB.push(42);

    printBasicInfo(stackB.top(), stackB.size());

    MutantStack<int> stackC(stackB);

    printBasicInfo(stackC.top(), stackC.size());

    MutantStack<int> stackD;

    stackD = stackC;
    printBasicInfo(stackD.top(), stackD.size());

    std::cout << std::endl;

    std::stack<int> stackS(stackB);

    printBasicInfo(stackS.top(), stackS.size());

    MutantStack<int> stackM(stackS);

    printBasicInfo(stackM.top(), stackM.size());

    std::cout << std::endl << "=== COMPARISON TO LIST TESTS ===" << std::endl << std::endl;

    std::list<int>      list;
    MutantStack<int>    mutantStack;

    list.push_back(-1);
    list.push_back(11);
    list.push_back(0);
    list.push_back(42);
    list.push_back(2147483647);
    list.push_back(-2147483648);

    mutantStack.push(-1);
    mutantStack.push(11);
    mutantStack.push(0);
    mutantStack.push(42);
    mutantStack.push(2147483647);
    mutantStack.push(-2147483648);

    printMoreInfo(list.back(), list.size(), mutantStack.top(), mutantStack.size());

    list.pop_back();
    list.pop_back();

    mutantStack.pop();
    mutantStack.pop();

    printMoreInfo(list.back(), list.size(), mutantStack.top(), mutantStack.size());

    std::cout << std::endl;

    {
        std::list<int>::iterator it = list.begin();
        std::list<int>::iterator ite = list.end();
        for ( ; it != ite; it++) {
            (*it)++;
        }
    }

    {
        std::list<int>::const_iterator it = list.begin();
        std::list<int>::const_iterator ite = list.end();
        for ( ; it != ite; it++) {
            std::cout << "Element in list is " << *it << std::endl;
        }
    }

    std::cout << std::endl;

    {
        MutantStack<int>::iterator it = mutantStack.begin();
        MutantStack<int>::iterator ite = mutantStack.end();
        for ( ; it != ite; it++) {
            (*it)++;
        }
    }

    {
        MutantStack<int>::const_iterator it = mutantStack.begin();
        MutantStack<int>::const_iterator ite = mutantStack.end();
        for ( ; it != ite; it++) {
            std::cout << "Element in stack is " << *it << std::endl;
        }
    }

    std::cout << std::endl;

    {
        std::list<int>::reverse_iterator it = list.rbegin();
        std::list<int>::reverse_iterator ite = list.rend();
        for ( ; it != ite; it++) {
            (*it)--;
        }
    }

    {
        std::list<int>::const_reverse_iterator it = list.rbegin();
        std::list<int>::const_reverse_iterator ite = list.rend();
        for ( ; it != ite; it++) {
            std::cout << "Element in list is " << *it << std::endl;
        }
    }

    std::cout << std::endl;

    {
        MutantStack<int>::reverse_iterator it = mutantStack.rbegin();
        MutantStack<int>::reverse_iterator ite = mutantStack.rend();
        for ( ; it != ite; it++) {
            (*it)--;
        }
    }

    {
        MutantStack<int>::const_reverse_iterator it = mutantStack.rbegin();
        MutantStack<int>::const_reverse_iterator ite = mutantStack.rend();
        for ( ; it != ite; it++) {
            std::cout << "Element in stack is " << *it << std::endl;
        }
    }

    return 0;
}
