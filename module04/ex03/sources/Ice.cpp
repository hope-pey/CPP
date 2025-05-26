#include "../headers/Ice.hpp"

Ice::Ice() : AMateria::AMateria()
{
    this->AType = "ice";
    std::cout << "ICE default constructor has been called" << std::endl;
}

Ice::Ice(std::string const & type) : AMateria(type)
{
    std::cout << "ICE constructor has been called" << std::endl;
}

Ice::Ice(Ice const &other) : AMateria(other){
    std::cout << "ICE copy constructor has been called" << std::endl;
}

Ice::~Ice(){
    std::cout << "ICE destructor has been called" << std::endl;
}

Ice &Ice::operator=(Ice const &other){
    if (this != &other)
        AMateria::operator=(other);
    std::cout << "ICE copy assignement operator has been called" << std::endl;
    return (*this);
}

//use copy instructor to return an object
AMateria* Ice::clone() const{
    return (new Ice());
}
void Ice::use (ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
