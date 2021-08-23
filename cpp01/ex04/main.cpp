#include <iostream>
#include <fstream>
#include <string>

int	main(int ac, char *av[]) {

	if (ac != 4) {
		std::cout << "Error: invalid number of arguments" << std::endl;
		return (1);
	}

	const std::string	fileName(av[1]);
	const std::string	s1(av[2]);
	const std::string	s2(av[3]);

	if (fileName.empty() || s1.empty() || s2.empty()) {
		std::cout << "Error: an argument is empty" << std::endl;
		return (1);
	}

	std::ifstream		fsInput(fileName.c_str());
	std::ofstream		fsOutput("FILENAME.replace");
	std::string			buf;

	if (fsInput.fail() || fsOutput.fail()) {
		std::cout << "Error: file operation failed" << std::endl;
		return (1);
	}

	while (getline(fsInput, buf)) {

		std::size_t		found;

		found = buf.find(s1);
		if (found == std::string::npos) {
			fsOutput << buf;
		}
		else {
			while (found != std::string::npos) {
				fsOutput << buf.substr(0, found);
				fsOutput << s2;
				buf = buf.substr(found + s1.size(), buf.size());
				found = buf.find(s1);
			}
			fsOutput << buf;
		}
	}

	return (0);
}
