#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

class AMatereia
{
    protected:
        std::string AType;
    
    public:
        AMatereia();
        AMatereia(std::string const & type);
        AMatereia(AMatereia const &other);
        ~AMatereia();

        AMatereia &operator=(AMatereia const &other);

        std::string const &getType() const;

        virtual AMatereia* clone() const = 0;
        virtual void use (ICharacter& target);
};

#endif