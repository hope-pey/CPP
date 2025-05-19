#include "../headers/Cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    std::cout << "Cat constructor has been caled" << std::endl;
}

Cat::Cat (const Cat &other) : Animal(other){
    std::cout << "Cat copy constructor has been caled" << std::endl;
}

Cat &Cat::operator=(const Cat &other){
    if (this != &other){
        Animal::operator=(other);
    }
    std::cout << "Cat assiengment operator has been caled" << std::endl;
    return (*this);
}

Cat::~Cat(){
    std::cout << "Cat destructor has been called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "cats don’t bark" << std::endl;
}
