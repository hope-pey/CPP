#include "../headers/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("unknown WrongAnimal")
{
    std::cout << "WrongAnimal constructor has been caled" << std::endl;
}

WrongAnimal::WrongAnimal (const WrongAnimal &other){
    *this = other;
    std::cout << "WrongAnimal copy constructor has been caled" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
    if (this != &other){
        this->type = other.type;
    }
    std::cout << "WrongAnimal assiengment operator has been caled" << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor has been called" << std::endl;
}

void WrongAnimal::makeSound() const{
    std::cout << "some WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const{
    return(this->type);
}