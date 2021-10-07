#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

    public:

        // Constructors and destructor
        MateriaSource(void);
        MateriaSource(const MateriaSource &src);
        virtual ~MateriaSource();

        // Operator overloads
        MateriaSource&	operator=(const MateriaSource &rhs);

        // Member functions
        void        learnMateria(AMateria* materia);
		AMateria*   createMateria(const std::string &type);

    private:

        // Attributes
        AMateria*   _materia[4];

};

#endif // MATERIASOURCE_HPP
