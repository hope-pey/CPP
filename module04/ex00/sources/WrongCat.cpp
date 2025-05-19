#include "../headers/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "WrongCat constructor has been caled" << std::endl;
}

WrongCat::WrongCat (const WrongCat &other) : WrongAnimal(other){
    this->type = other.getType();
    std::cout << "WrongCat copy constructor has been caled" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other){
    if (this != &other){
        WrongAnimal::operator=(other);
    }
    std::cout << "WrongCat assiengment operator has been caled" << std::endl;
    return (*this);
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor has been called" << std::endl;
}

void WrongCat::makeSound() const{
    std::cout << "WrongCats don’t bark" << std::endl;
}
