#include "../headers/Brain.hpp"

Brain::Brain()
{
    int i = 0;
    while (i < 100){
        std::stringstream ss;
        ss << "Idea " << i;
        this->ideas[i] = ss.str();
        i++;
    }
    std::cout << "Brain constructor has been caled" << std::endl;
}

Brain::Brain (const Brain &other){
    int i = 0;
    while (i < 100){
        this->ideas[i] = other.ideas[i];
        i++;
    }
    std::cout << "Brain copy constructor has been caled" << std::endl;
}

Brain &Brain::operator=(const Brain &other){
    if (this != &other){
        int i = 0;
        while (i < 100){
            this->ideas[i] = other.ideas[i];
            i++;
    }
    }
    std::cout << "Brain assiengment operator has been caled" << std::endl;
    return (*this);
}

Brain::~Brain(){
    std::cout << "Brain destructor has been called" << std::endl;
}

std::string Brain::getIdea(int i) const{
    if (i < 0 || i >= 100) return "";
    return this->ideas[i];
}

void Brain::setIdea(int i, const std::string &idea){
    if (i < 0 || i >= 100) return;
    this->ideas[i] = idea;
}
