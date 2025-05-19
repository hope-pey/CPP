#include "../headers/Dog.hpp"
// #include "../headers/Brain.hpp"

Dog::Dog() : brain(new Brain())
{
    this->type = "Dog";
    std::cout << "Dog constructor has been caled" << std::endl;
}

Dog::Dog (const Dog &other) : Animal(other), brain (new Brain(*other.brain)){
    std::cout << "Dog copy constructor has been caled" << std::endl;
}

Dog &Dog::operator=(const Dog &other){
    if (this != &other){
        Animal::operator=(other);
        *brain = *other.brain;
    }
    std::cout << "Dog assiengment operator has been caled" << std::endl;
    return (*this);
}

Dog::~Dog(){
    delete brain;
    std::cout << "Dog destructor has been called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Woof! Woof!" << std::endl;
}

Brain *Dog::getBrain() const{
    return (this->brain);
}