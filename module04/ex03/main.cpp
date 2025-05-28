#include "headers/Caracter.hpp"
#include "headers/AMateria.hpp"
#include "headers/IMateriaSource.hpp"
#include "headers/MateriaSource.hpp"
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
    AMateria *ice2 = new Ice();
    AMateria *cure2 = new Cure();


    std::cout << "---------- equip --------" << std::endl;
    a.equip(ice);
    a.equip(cure);
    a.equip(ice2);
    a.equip(cure2);
    std::cout << "---------- equip full --------" << std::endl;
    a.equip(cure);
    std::cout << "---------- use --------" << std::endl;
    a.use(1, b);
    a.use(2, b);
    a.use(4, b);
    a.use(-1, b);
    std::cout << "---------- unequip --------" << std::endl;
    a.unequip(1);
    a.use(0, b);
    a.use(1, b);
    a.use(2, b);
    a.use(3, b);
    std::cout << "---------- copy --------" << std::endl;
    Character c = a;
    c.use(0, b);
    std::cout << "------------------------" << std::endl;
    delete cure;
}

// int main ()
// {
//     // materia();
//     character();
// }

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    std::cout << "---------------------------------" << std::endl;
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");//create a new materia
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    std::cout << "---------------------------------" << std::endl;
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}