#include "../headers/AMateria.hpp"

AMateria::AMateria() : AType("unknown"){
    std::cout << "AMateria default constructor" << std::endl;
}

AMateria::AMateria(std::string const & type) : AType(type){
    std::cout << "AMateria constructor" << std::endl;
}

AMateria::AMateria(AMateria const &other){
    *this = other;
    std::cout << "AMateria copy constructor" << std::endl;
}

AMateria::~AMateria(){
    std::cout << "AMateria destructor" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &other){
    if (this != &other)
        *this = other;
    std::cout << "AMateria assignment operator" << std::endl;
    return (*this);
}

std::string const &AMateria::getType() const{
    return (this->AType);
}

void AMateria::use (ICharacter& target){
    (void)target;
}
