#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>

class Dog : public Animal
{
    // private:
    //     std::string type;
    public:
        Dog();
        Dog (const Dog &other);
        Dog &operator=(const Dog &other);
        ~Dog();
};

#endif