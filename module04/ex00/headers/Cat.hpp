#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
    private:
    public:
        Cat();
        ~Cat();
        Cat (const Cat &other);
        Cat &operator=(const Cat &other);

        void makeSound() const;
};

#endif