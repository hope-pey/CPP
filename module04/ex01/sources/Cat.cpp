#include "../headers/Cat.hpp"

Cat::Cat() : brain(new Brain())
{
    this->type = "Cat";
    std::cout << "Cat constructor has been caled" << std::endl;
}

Cat::Cat (const Cat &other) : Animal(other), brain(new Brain(*other.brain)){
    std::cout << "Cat copy constructor has been caled" << std::endl;
}

Cat &Cat::operator=(const Cat &other){
    if (this != &other){
        Animal::operator=(other);
        *brain = *other.brain;
    }
    std::cout << "Cat assiengment operator has been caled" << std::endl;
    return (*this);
}

Cat::~Cat(){
    delete brain;
    std::cout << "Cat destructor has been called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "cats don’t bark" << std::endl;
}

Brain *Cat::getBrain() const{
    return (this->brain);
}