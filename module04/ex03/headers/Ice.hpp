#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"//

class Ice : public AMateria
{
    // protected:
    //     std::string ice;
    
    public:
        Ice();
        Ice(std::string const & type);
        Ice(Ice const &other);
        ~Ice();

        Ice &operator=(Ice const &other);

        AMateria* clone() const;
        void use (ICharacter& target);
};

#endif