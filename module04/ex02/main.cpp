#include "headers/Animal.hpp"
#include "headers/Dog.hpp"
#include "headers/Cat.hpp"
#include "headers/Brain.hpp"
#include "headers/WrongCat.hpp"

int main()
{
    Animal *animal[4];//why
    int i = 0;
    while (i < 2){
        animal[i] = new Dog();
        i++;
    }
    while (i < 4){
        animal[i] = new Cat();
        i++;
    }
    i = 0;
    while (i < 4) {
        std::cout << animal[i]->getType() << " says: ";
        animal[i]->makeSound();
        i++;
    }
    i = 0;
    while (i < 4){
        delete animal[i];
        i++;
    }
}