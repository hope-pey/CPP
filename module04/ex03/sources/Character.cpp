#include "../headers/Caracter.hpp"

Character::Character(std::string const &name) : name(name)
{
    int i = 0;
    while (i < 4){
        this->inventory[i] = NULL;
        i++;
    }
    std::cout << this->name << " Character default costructor" << std::endl;
}

Character::~Character(){
    int i = 0;
    while (i < 4)
    {
        delete inventory[i];
        i++;
    }
    
    std::cout << this->name << " Character destructor" << std::endl;
}

Character::Character(Character const &other) : name(other.name)
{
    int i = 0;
    while (i < 4){
        if (other.inventory[i])
            this->inventory[i] = other.inventory[i]->clone();
        else
            this->inventory[i] = NULL;
        i++;
    }
    std::cout << "Character copy costructor" << std::endl;    
}

Character &Character::operator=(Character const &other){
    if (this != &other){
        this->name = other.name;
        int i = 0;
        while (i < 4)
        {
            if (inventory[i])
                delete inventory[i];
            inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : NULL;
            i++;
        }
    }
    std::cout << "Character assignment operator" << std::endl;    
    return (*this);
}

std::string const & Character::getName() const{
    return (name);
}

void Character::equip(AMateria* m){
    if (!m) return;
    int i = 0;
    while (i < 4){
        if (!inventory[i]){
            inventory[i] = m;
            std::cout << this->name <<" added succesfully materia " << m->getType() << " at index " << i << std::endl;
            return ;
        }
        i++;
    }
    std::cout << "inventory is full, unequip a materia to equip" << std::endl;
}

void Character::unequip(int idx){
    if (idx < 0 || idx > 3) 
    {
        std::cout << "wrong index, no materia exist at this index" << std::endl;
        return;
    }
    inventory[idx] = NULL;
    std::cout << "unequip materia succesfully" << std::endl;
}

void Character::use(int idx, ICharacter& target){
    if (idx < 0 || idx > 3 || !inventory[idx])
    {
        std::cout << "inventory is empty or wrong index" << std::endl;
        return;
    }
    inventory[idx]->use(target);
}
