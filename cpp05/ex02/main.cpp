#include <ostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {

    std::cout << "SHRUBBERYCREATIONFORM TEST =======================" << std::endl << std::endl;

    {
        Bureaucrat  boss("Michael", 1), employee("Franklin", 47), crazyGuy("Trevor", 150);

        std::cout << std::endl;

        {
            ShrubberyCreationForm asciiArt("tree");
            boss.signForm(asciiArt);
            boss.executeForm(asciiArt);
        }

        std::cout << std::endl;

        {
            ShrubberyCreationForm asciiArt("motorcycle");
            employee.signForm(asciiArt);
            employee.executeForm(asciiArt);
        }

        std::cout << std::endl;

        {
            ShrubberyCreationForm asciiArt("house");
            crazyGuy.signForm(asciiArt);
            crazyGuy.executeForm(asciiArt);
        }

        std::cout << std::endl;
    }

    std::cout << std::endl << "ROBOTOMYREQUESTFORM TEST =======================" << std::endl << std::endl;

    {
        Bureaucrat  boss("Michael", 1), employee("Franklin", 47), crazyGuy("Trevor", 150);

        std::cout << std::endl;

        {
            RobotomyRequestForm terribleExperience("Marvin");
            boss.signForm(terribleExperience);
            boss.executeForm(terribleExperience);
        }

        std::cout << std::endl;

        {
            RobotomyRequestForm terribleExperience("R2D2");
            employee.signForm(terribleExperience);
            employee.executeForm(terribleExperience);
        }

        std::cout << std::endl;

        {
            RobotomyRequestForm terribleExperience("Astroboy");
            crazyGuy.signForm(terribleExperience);
            crazyGuy.executeForm(terribleExperience);
        }

        std::cout << std::endl;
    }

    std::cout << std::endl << "PRESIDENTIALPARDONFORM TEST =======================" << std::endl << std::endl;

    {
        Bureaucrat  boss("Michael", 1), employee("Franklin", 47), crazyGuy("Trevor", 150);

        std::cout << std::endl;

        {
            PresidentialPardonForm pardonRequest("Bowser");
            boss.signForm(pardonRequest);
            boss.executeForm(pardonRequest);
        }

        std::cout << std::endl;

        {
            PresidentialPardonForm pardonRequest("Dark Vador");
            employee.signForm(pardonRequest);
            employee.executeForm(pardonRequest);
        }

        std::cout << std::endl;

        {
            PresidentialPardonForm pardonRequest("Picsou");
            crazyGuy.signForm(pardonRequest);
            crazyGuy.executeForm(pardonRequest);
        }

        std::cout << std::endl;
    }

    return 0;
}
