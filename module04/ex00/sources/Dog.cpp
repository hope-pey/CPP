#include "../headers/Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    std::cout << "Dog constructor has been caled" << std::endl;
}

Dog::Dog (const Dog &other) : Animal(other){
    std::cout << "Dog copy constructor has been caled" << std::endl;
}

Dog &Dog::operator=(const Dog &other){
    if (this != &other){
        Animal::operator=(other);
    }
    std::cout << "Dog assiengment operator has been caled" << std::endl;
    return (*this);
}

Dog::~Dog(){
    std::cout << "Dog destructor has been called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Woof! Woof!" << std::endl;
}
