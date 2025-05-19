#include "../headers/Animal.hpp"

Animal::Animal() : type("unknown animal")
{
    std::cout << "Animal constructor has been caled" << std::endl;
}

Animal::Animal (const Animal &other){
    *this = other;
    std::cout << "Animal copy constructor has been caled" << std::endl;
}

Animal &Animal::operator=(const Animal &other){
    if (this != &other){
        this->type = other.type;
    }
    std::cout << "Animal assiengment operator has been caled" << std::endl;
    return (*this);
}

Animal::~Animal(){
    std::cout << "Animal destructor has been called" << std::endl;
}

void Animal::makeSound() const{
    std::cout << "some animal sound" << std::endl;
}

std::string Animal::getType() const{
    return(this->type);
}
