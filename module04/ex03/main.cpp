#include "headers/Caracter.hpp"
#include "headers/AMateria.hpp"
// #include "headers/ICharacter.hpp"
#include "headers/Cure.hpp"
#include "headers/Ice.hpp"

void materia(){
    AMateria *clone;
    AMateria *ice = new Ice();
    AMateria *cure = new Cure();
    std::cout << "ice type : " << ice->getType() << std::endl;
    std::cout << "cure type : " << cure->getType() << std::endl;
    
    clone = ice->clone();
    std::cout << "clone type : " << clone->getType() << std::endl;
}

void character(){
    Character a("amal");
    Character b("hope");

    AMateria *ice = new Ice();
    AMateria *cure = new Cure();


    std::cout << "---------- equip --------" << std::endl;
    a.equip(ice);
    a.equip(cure);
    // a.equip(new Ice());
    // a.equip(new Cure());
    // std::cout << "---------- equip full --------" << std::endl;
    // a.equip(cure);
    // std::cout << "---------- use --------" << std::endl;
    // a.use(1, b);
    // a.use(2, b);
    // a.use(4, b);
    // a.use(-1, b);
    // std::cout << "---------- unequip --------" << std::endl;
    // a.unequip(1);
    // a.use(0, b);
    // a.use(1, b);
    // a.use(2, b);
    // a.use(3, b);
    // std::cout << "---------- copy --------" << std::endl;
    // Character c = a;
    // c.use(0, b);
    std::cout << "------------------------" << std::endl;
    // delete ice;
    // delete cure;
}

int main ()
{
    // materia();
    character();
}