#include "../headers/Cure.hpp"

Cure::Cure() : AMateria::AMateria()
{
    this->AType = "cure";
    std::cout << "Cure default constructor has been called" << std::endl;
}

Cure::Cure(std::string const & type) : AMateria(type)
{
    std::cout << "Cure constructor has been called" << std::endl;
}

Cure::Cure(Cure const &other) : AMateria(other){
    std::cout << "Cure copy constructor has been called" << std::endl;
}

Cure::~Cure(){
    std::cout << "Cure destructor has been called" << std::endl;
}

Cure &Cure::operator=(Cure const &other){
    if (this != &other)
        AMateria::operator=(other);
    std::cout << "Cure copy assignement operator has been called" << std::endl;
    return (*this);
}

//use copy instructor to return an object
AMateria* Cure::clone() const{
    return (new Cure());
}
void Cure::use (ICharacter& target){
    std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}
