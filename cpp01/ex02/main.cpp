#include <iostream>
#include <string>

int main(void) {
	std::string		str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string		&stringREF = str;

	std::cout << "Address in memory of the string: " << &str << std::endl;
	std::cout << "Address of the string using stringPTR: " << stringPTR << std::endl;
	std::cout << "Address of the string using stringREF: " << &stringREF << std::endl;

	std::cout << "Displaying the string using stringPTR: " << *stringPTR << std::endl;
	std::cout << "Displaying the string using stringREF: " << stringREF << std::endl;
	return (0);
}
