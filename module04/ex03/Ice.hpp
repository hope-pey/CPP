#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>

class Ice
{
    // protected:
    //     std::string ice;
    
    public:
        Ice();
        Ice(std::string const & type);
        Ice(Ice const &other);
        ~Ice();

        Ice &operator=(Ice const &other);

        std::string const &getType() const;

        Ice* clone() const = 0;
        void use (ICharacter& target);
};

#endif