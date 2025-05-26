#include "../headers/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    int i = 0;
    while (i < 4){
        inv[i] = NULL;
        i++;
    }
}

MateriaSource::MateriaSource(MateriaSource const &other){
    int i = 0;
    while (i < 4){
        if (other.inv[i])
            this->inv[i] = other.inv[i]->clone();
        else
            this->inv[i] = NULL;
        i++;
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other){
    if (this != &other){
        int i = 0;
        while (i < 4)
        {
            delete inv[i];
            inv[i] = other.inv[i] ? other.inv[i]->clone() : NULL;
            i++;
        }
    }
    std::cout << " assignment operator" << std::endl;    
    return (*this);
}

MateriaSource::~MateriaSource(){
    int i = 0;
    while (i < 4){
        delete inv[i];
        i++;
    }
}

void MateriaSource::learnMateria(AMateria*){

}

AMateria* MateriaSource::createMateria(std::string const & type){

}