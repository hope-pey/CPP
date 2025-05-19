#include "headers/Animal.hpp"
#include "headers/Dog.hpp"
#include "headers/Cat.hpp"
#include "headers/WrongCat.hpp"

void test_wrong()
{
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* cat = new WrongCat();

    std::cout << cat->getType() << std::endl;
    cat->makeSound();

    delete meta;
    delete cat;
}

int main()
{
//     Animal animal;
//     std::cout << "Type: " << animal.getType() << std::endl;
//     animal.makeSound();

//     // Dog dog;
//     // std::cout << "Type: " << dog.getType() << std::endl;
//     // dog.makeSound();

//     // Cat cat;
//     // std::cout << "Type: " << cat.getType() << std::endl;
//     // cat.makeSound();
    // const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    Animal d = *j;
    std::cout << d.getType() << " " << std::endl;
    d.makeSound();
    // j->makeSound();
    // meta->makeSound();
    delete i;
    std::cout << "----------------------------" << std::endl;
    test_wrong();
}