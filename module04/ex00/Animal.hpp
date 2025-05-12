#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    private:
        std::string type;
    public:
        Animal();
        Animal (const Animal &other);
        Animal &operator=(const Animal &other);
        ~Animal();
};

#endif