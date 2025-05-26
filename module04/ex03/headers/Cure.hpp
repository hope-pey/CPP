#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"//


class Cure : public AMateria
{
    public :
        Cure();
        Cure(std::string const &CureType);
        Cure(Cure const &other);
        ~Cure();

        Cure &operator=(Cure const &other);

        AMateria* clone() const;
        void use (ICharacter& target);
};

#endif