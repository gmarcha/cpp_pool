#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) :
    Form("ShrubberyCreationForm", "default", 145, 137) {
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
    Form("ShrubberyCreationForm", target, 145, 137) {
    std::cout << "ShrubberyCreationForm initialization constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) :
    Form(src) {
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
    Form::operator=(rhs);
    std::cout << "ShrubberyCreationForm assignement operator called" << std::endl;
    return *this;
}

void    ShrubberyCreationForm::execute(const Bureaucrat &executer) const {
    Form::execute(executer);
    const std::string filename(_target + "_shrubbery");
    std::ofstream fs(filename.c_str(), std::ios::out | std::ios::trunc);
    if (fs.is_open()) {
        fs << "            .        +          .      .          .\n";
        fs << "     .            _        .                    .\n";
        fs << "  ,              /;-._,-.____        ,-----.__\n";
        fs << " ((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n";
        fs << "  `                 \\   _|`\"=:_::.`.);  \\ __/ /\n";
        fs << "                      ,    `./  \\:. `.   )==-'  .\n";
        fs << "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .\n";
        fs << ".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o\n";
        fs << "       .    /:+- - + +- : :- + + -:'  /(o-) \\)     .\n";
        fs << "  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7\n";
        fs << "   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/\n";
        fs << "              \\:  `  X` _| _,\\/'   .-'\n";
        fs << ".               \":._:`\\____  /:'  /      .           .\n";
        fs << "                    \\::.  :\\/:'  /              +\n";
        fs << "   .                 `.:.  /:'  }      .\n";
        fs << "           .           ):_(:;   \\           .\n";
        fs << "                      /:. _/ ,  |\n";
        fs << "                   . (|::.     ,`                  .\n";
        fs << "     .                |::.    {\\\n";
        fs << "                      |::.\\  \\ `.\n";
        fs << "                      |:::(\\    |\n";
        fs << "              O       |:::/{ }  |                  (o\n";
        fs << "               )  ___/#\\::`/ (O \"==._____   O, (O  /`\n";
        fs << "          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~\n";
        fs << "      ~~~~~~~~~~~~~~~~~~~~~~~\\W~~~~~~~~~~~~\\|/~~\n";
        fs.close();
    }
}
