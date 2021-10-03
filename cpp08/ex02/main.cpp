#include <iostream>
#include <stack>

int main(void) {

    std::stack<int> stackA;

    stackA.push(42);
    stackA.push(-1);

    std::cout << stackA.top() << std::endl;
    return 0;
}
