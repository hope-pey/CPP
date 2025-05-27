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
    *this = other;
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

void MateriaSource::learnMateria(AMateria* m){
    if (!m){
        std::cout << "Materia source is empty" << std::endl;
        return;
    }
    int i = 0;
    while (i < 4){
        if (!inv[i]){
            inv[i] = m;
            std::cout << "Materia source added" << std::endl;
            return;
        }
        i++;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type){
    int i = 0;
    while (i < 4 && this->inv[i]){
        if (inv[i]->getType() == type){
            std::cout << "Materia source created" << std::endl;
            return (inv[i]->clone());
        }
        i++;
    }
    return (NULL);
}
