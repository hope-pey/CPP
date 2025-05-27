#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *inv[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(MateriaSource const &other);
        MateriaSource &operator=(MateriaSource const &other);

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif